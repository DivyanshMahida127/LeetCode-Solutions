class Solution {
public:
    int numSub(string s) {
        int n = s.size();
        if(n == 1){
            if(s[0] == '1'){
                return 1;
            }
            else{
                return 0;
            }
        }
        int i,j;
        int answer;
        answer = 0,j = 0;
        
        // answer = answer%(1000000007);
        
        for(i=0;i<n;i++){
            if(s[i] == '1'){
                answer += j+1;
                answer = answer%(1000000007);
                j++;
            }
            else{
                j = 0;
            }
        }
        return answer;
    }
};