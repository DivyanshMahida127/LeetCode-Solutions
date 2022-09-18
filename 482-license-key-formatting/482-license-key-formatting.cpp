class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string answer;
        int n = s.size();
        int i,j;
        
        int count = 0;
        for(i=0;i<n;i++){
            if(s[i] != '-'){
                count++;
            }
        }
        int total = count;
        count = count%k;
        j=0;
        for(i=0;i<n;i++){
            if(j == count){
                break;
            }
            
            if(s[i] != '-'){
                if(s[i] >= 97 && s[i] <= 122){
                    int x = s[i]-97+65;
                    answer += x;
                    j++;
                }
                else{
                    answer += s[i];
                    j++;
                }
            }
            
            if(j == count && j == total){
                return answer;
            }

            if(j == count){
                answer += '-';
                i++;
                break;
            }
        }
        
        // cout << "i: " << i << "\n"; 
        j=0;
        for(i=i;i<n;i++){
            if(s[i] != '-'){
                if(s[i] >= 97 && s[i] <= 122){
                    int x = s[i]-97+65;
                    answer += x;
                    j++;
                    count++;
                }
                else{
                    answer += s[i];
                    j++;
                    count++;
                }
            }
            
            if(total == count){
                break;
            }

            if(j == k){
                j=0;
                answer += '-';
            }

        }
        return answer;
    }
};