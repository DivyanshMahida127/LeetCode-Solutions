class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        int i,j;
        vector<int> answer(n,-1);
        
        if(n == 1){
            answer[0] = 0;
            return answer;
        }
        
        for(i=0;i<n;i++){
            if(s[i] == c){
                answer[i] = 0;
            }
        }
        
        j=-1;
        i=0;
        while(i<n){
            if(answer[i] == 0){
                j = 0;
                j++;
            }
            else{
                if(j == -1){
                    answer[i] = -1;
                }
                else{
                    answer[i] = j;
                    j++;
                }
            }
            i++;
        }
        
        j = -1;
        i = n-1;
        while(i >= 0){
            if(answer[i] == 0){
                j=0;
                j++;
            }
            else if(answer[i] == -1){
                answer[i] = j;
                j++;
            }
            else{
                if(answer[i] > j && j != -1){
                    answer[i] = j;
                    j++;
                }
            }
            i--;
        }
        return answer;
    }
};