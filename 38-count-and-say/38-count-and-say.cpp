class Solution {
public:
    string countAndSay(int n) {
        string answer;
        if(n == 1){
            answer = "1";
            return answer;
        }
        
        int i,j,k,count,m;
        char compare;
        string result;
        
        answer = "1";
        m = answer.size();
        for(i=2;i<=n;i++){
            j=0;
            result = "";
            while(j < m){
                compare = answer[j];
                k = j,count = 0;
                while(k < m){
                    if(answer[k] == compare){
                        count++;
                        k++;
                        j++;
                    }
                    else{
                        string add = to_string(count) + answer[k-1];
                        result += add;
                        j = k-1;
                        count = 0;
                        break;
                    }
                }
                j++;
                
                if(count != 0){
                    string add = to_string(count) + answer[k-1];
                    result += add;
                }
            }
            
            answer = result;
            m = answer.size();
        }
        
        
        return result;
    }
};