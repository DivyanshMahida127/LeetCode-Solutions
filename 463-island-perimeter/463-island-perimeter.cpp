class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int answer = 0;
        int m,n;
        m = grid.size();
        n = grid[0].size();
        int i,j;
        int a,b;
        
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(grid[i][j] == 1){
                    a=i,b=j;
                    b--;
                    if(b >= 0){
                        if(grid[a][b] != 1){
                            answer++;
                        }
                    }
                    else{
                        answer++;
                    }
                    b++;
                    
                    b++;
                    if(b < n){
                        if(grid[a][b] != 1){
                            answer++;
                        }
                    }
                    else{
                        answer++;
                    }
                    b--;
                    
                    a++;
                    if(a < m){
                        if(grid[a][b] != 1){
                            answer++;
                        }
                    }
                    else{
                        answer++;
                    }
                    a--;
                    
                    a--;
                    if(a >= 0){
                        if(grid[a][b] != 1){
                            answer++;
                        }
                    }
                    else{
                        answer++;
                    }
                    a++;
                }
                // cout << answer << "\n";
            }
        }
        return answer;
    }
};