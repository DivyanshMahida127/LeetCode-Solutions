class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m = g.size(),n = s.size();
        int i,j;
        int answer = 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        if(n == 0){
            return 0;
        }
        
        j=0;
        for(i=0;i<m;i++){
            if(g[i] <= s[j]){
                answer++;
                j++;
            }
            else{
                while(j < n){
                    if(g[i] <= s[j]){
                        answer++;
                        j++;
                        break;
                    }
                    else{
                        j++;
                    }
                    
                }
            }
            
            if(j == n){
                break;
            }
        }
        return answer;
    }
};