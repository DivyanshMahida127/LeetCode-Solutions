class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int i,j,n,m;
        n = matrix[0].size();
        int a;
        for(i=0;i<n;i++){
            vector<int> check(n+1,0);
            for(j=0;j<n;j++){
                a = matrix[i][j];
                
                if(check[a] == 0){
                    check[a]++;
                }
                else if(check[a] > 0){
                    return false;
                }
            }
        }
        
        for(i=0;i<n;i++){
            vector<int> check(n+1,0);
            for(j=0;j<n;j++){
                a = matrix[j][i];
                
                if(check[a] == 0){
                    check[a]++;
                }
                else if(check[a] > 0){
                    return false;
                }
            }
        }
        
        return true;
    }
};