class Solution {
public:
    string greatestLetter(string s) {
        string answer;
        vector<int> upper(26,0);
        vector<int> lower(26,0);
        
        int n = s.length();
        
        if(n == 1){
            return answer;
        }
        else{
            int i,j;
            
            for(i=0;i<n;i++){
                if(s[i] >= 65 && s[i] <= 90){
                    upper[s[i]-65]++;
                }
                else{
                    lower[s[i]-97]++;
                }
            }
            
            for(j=25;j>=0;j--){
                if((upper[j] != 0) && (lower[j] != 0)){
                    answer = j + 65;
                    return answer;
                }
            }
        }
        
        return answer;
    }
};