class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> answer((n-2),vector<int>(n-2));
        int i,j,k,l;
        int result;
        for(i=0;i<(n-2);i++){
            for(j=0;j<(n-2);j++){
                result = 0;
                for(k=i;k<i+3;k++){
                    for(l=j;l<j+3;l++){
                        result = max(result,grid[k][l]);
                    }
                }
                answer[i][j] = result;
            }
        }
        return answer;
    }
};