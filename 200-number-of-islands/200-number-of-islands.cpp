class Solution {
public:
    void count(vector<vector<char>>& grid,int i,int j,int m, int n){
        i--;
        if(i >= 0){
            if(grid[i][j] == '1'){
                grid[i][j] = '2';
                count(grid,i,j,m,n);
            }
        }
        i++;
        
        i++;
        if(i < m){
            if(grid[i][j] == '1'){
                grid[i][j] = '2';
                count(grid,i,j,m,n);
            }
        }
        i--;
        
        j++;
        if(j < n){
            if(grid[i][j] == '1'){
                grid[i][j] = '2';
                count(grid,i,j,m,n);
            }
        }
        j--;
        
        j--;
        if(j >= 0){
            if(grid[i][j] == '1'){
                grid[i][j] = '2';
                count(grid,i,j,m,n);
            }   
        }
        j++;
        
        return ;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m,n,i,j;
        m = grid.size();
        n = grid[0].size();
        int answer = 0;
        
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(grid[i][j] == '1'){
                    grid[i][j] = '2';
                    count(grid,i,j,m,n);
                    answer++;
                }
            }
        }
        return answer;
    }
};