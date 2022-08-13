class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        
        if(n == 1){
            return 1;
        }
        
        if(n == 2){
            if(s[0] == s[1]){
                return 2;
            }
            else{
                return 1;
            }
        }
        vector<int> upper(26,0),lower(26,0);
        int i,j;
        for(i=0;i<n;i++){
            if(s[i] >= 97){
                lower[s[i]-97]++;
            }
            else{
                upper[s[i]-65]++;
            }
        }
        
        int answer = 0;
        for(i=0;i<26;i++){
            if(lower[i]%2 == 0){
                answer += lower[i];
                lower[i] = 0;
            }
            else{
                answer += lower[i]-1;
                lower[i] = 1;
            }
        }
        
        for(i=0;i<26;i++){
            if(upper[i]%2 == 0){
                answer += upper[i];
                upper[i] = 0;
            }
            else{
                answer += upper[i]-1;
                upper[i] = 1;
            }
        }
        
        bool a = false;
        for(i=0;i<26;i++){
            if(upper[i] == 1){
                answer++;
                break;
            }
            
            if(lower[i] == 1){
                answer++;
                break;
            }
        }
        return answer;
    }
};