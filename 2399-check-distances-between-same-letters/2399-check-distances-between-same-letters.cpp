class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        bool answer = true;
        int n = s.size();
        int i,j;
        if(n == 2){
            i = distance[s[0]-97];
            if(i == 0){
                return true;
            }
            else{
                return false;
            }
        }
        
        int x,y;
        vector<int> a(26,-1);
        for(i=0;i<n;i++){
            j = s[i]-97;
            if(a[j] == -1){
                a[j] = i;
            }
            else{
                x = a[j];
                y = i;
                int dist = y-x-1;
                if(dist != distance[j]){
                    return false;
                }
            }
        }
        
        return answer;
    }
};