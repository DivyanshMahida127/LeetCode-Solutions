class Solution {
public:
    int maxPower(string s) {
        int n = s.size();
        int i,j;
        int answer = 1,count = 1;
        for(i=1;i<n;i++){
            if(s[i] == s[i-1]){
                count++;
            }
            else{
                answer = max(answer,count);
                count = 1;
            }
        }
        answer = max(answer,count);
        return answer;
    }
};