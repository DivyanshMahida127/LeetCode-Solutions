class Solution {
public:
    bool areNumbersAscending(string s) {
        int n = s.size();
        int a,b,c;
        int i,j,k,number;
        bool answer = true;
        a = -1;
        for(i=0;i<n;i++){
            b = s[i]-48;
            if(b >= 0 && b <= 9){
                j = i;
                number = 0;
                while((s[j]-48) >= 0 && (s[j]-48) <= 9){
                    number = number*10 + (s[j]-48);
                    j++;
                }
                i = j-1;
                
                
                if(number > a){
                    a = number;
                }
                else{
                    answer = false;
                    return answer;
                }
            }
        }
        
        return answer;
    }
};