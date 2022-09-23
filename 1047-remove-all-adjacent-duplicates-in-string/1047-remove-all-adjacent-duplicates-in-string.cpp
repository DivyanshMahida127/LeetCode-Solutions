class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        if(n == 1){
            return s;
        }
        
        if(n == 2){
            if(s[0] == s[1]){
                return "";
            }
            else{
                return s;
            }
        }
        int i,j;
        string answer;
        j = 0;
        answer += s[0];
        for(i=1;i<n;i++){
            answer += s[i];
            if(answer.size() >= 2){
                j = answer.size();
                if(answer[j-1] == answer[j-2]){
                    answer = answer.erase(j-2);
                }
            }
        }
        return answer;
    }
};