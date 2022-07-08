class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int a = 0;
        int i,j,n,m;
        n = mat[0].size();
        m = n-1;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i == j){
                    a += mat[i][j];
                }
                else if(i != j){
                    if((i+j)==m){
                        a += mat[i][j];
                    }
                }
            }
        }
        return a;
    }
};