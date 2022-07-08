class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int a = 0,b = 0;
        int i,j,n,m;
        n = grid[0].size();
        m = n-1;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i == j){
                    if(grid[i][j] == 0){
                        return false;
                    }
                }
                else if(i != j){
                    if((i+j)==m){
                        if(grid[i][j] == 0){
                            return false;
                        }
                    }
                    else{
                        if(grid[i][j] != 0){
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};