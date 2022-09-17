class Solution {
public:
    void count(vector<vector<int>>& grid,int i,int j, int& result,int m, int n){
        i--;
        if(i >= 0){
            if(grid[i][j] == 1){
                result++;
                grid[i][j] = -1;
                count(grid,i,j,result,m,n);
            }
        }
        i++;
        
        i++;
        if(i < m){
            if(grid[i][j] == 1){
                result++;
                grid[i][j] = -1;
                count(grid,i,j,result,m,n);
            }
        }
        i--;
        
        j++;
        if(j < n){
            if(grid[i][j] == 1){
                result++;
                grid[i][j] = -1;
                count(grid,i,j,result,m,n);
            }
        }
        j--;
        
        j--;
        if(j >= 0){
            if(grid[i][j] == 1){
                result++;
                grid[i][j] = -1;
                count(grid,i,j,result,m,n);
            }   
        }
        j++;
        
        return ;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m,n,i,j;
        m = grid.size();
        n = grid[0].size();
        int answer = 0, result = 0;
        
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(grid[i][j] == 1){
                    grid[i][j] = -1;
                    result = 1;
                    count(grid,i,j,result,m,n);
                    answer = max(result,answer);
                }
            }
        }
        return answer;
    }
};