class Solution {
public:
    string reformatNumber(string number) {
        int m,n;
        n = number.size();
    
        if(n == 2){
            return number;
        }
        
        int i,j;
        m = 0;
        for(i=0;i<n;i++){
            j = number[i] - 48;
            if(j >= 0 && j <= 9){
                m++;
            }
        }
        
        int a = m%3;
        if(a == 1){
            a = 4;
        }
        else{
            a = 0;
        }
        
        string answer;
        j=0;
        int total = m,b = 0;
        while(j < n){
            if(total == a){
                break;
            }
            
            i = number[j]-48;
            if(i >= 0 && i <= 9){
                if(b <= 2){
                    answer += number[j];
                    b++;
                }
                else{
                    answer += '-';
                    answer += number[j];
                    b = 1;
                }
                j++;
                total--;
            }
            else{
                j++;
            }
            // cout << answer << "\n";
            
            if(total == a){
                break;
            }
        }
        
        int count = 0;
        if(a==4){
            if(m != 4){
                answer += '-';
            }
            for(i=j;i<n;i++){
                j = number[i]-48;
                if(j >= 0 && j <= 9){
                    answer += number[i];
                    count++;
                }
                
                if(count == 2){
                    answer += '-';
                    count++;
                }
            }
        }
        return answer;
    }
};