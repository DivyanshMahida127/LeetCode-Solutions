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
            // cout << "i " << i << "\n";
            // cout << "answer" << answer << "\n";
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
                        // cout << count << " " << answer[k-1] << "\n";
                        string add = to_string(count) + answer[k-1];
                        // cout << add << "\n";
                        result += add;
                        j = k-1;
                        count = 0;
                        break;
                    }
                }
                j++;
                
                if(count != 0){
                    // cout << "Second Loop" << "\n";
                    // cout << count << " " << answer[k-1] << "\n";
                    string add = to_string(count) + answer[k-1];
                    // cout << add << "\n";
                    result += add;
                }
            }
            
            answer = result;
            m = answer.size();
        }
        
        
        return result;
    }
};