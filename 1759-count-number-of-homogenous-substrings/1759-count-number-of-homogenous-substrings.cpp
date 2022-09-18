class Solution {
public:
    int countHomogenous(string s) {
        int n = s.size();
        int i,j;
        int answer;
        answer = 1;
        j = 1;
        for(i=1;i<n;i++){
            if(s[i] == s[i-1]){
                answer += j+1;
                answer = answer%(1000000007);
                j++;
            }
            else{
                j=0;
                answer += j+1;
                answer = answer%(1000000007);
                j++;
            }
        }
        return answer;
    }
};