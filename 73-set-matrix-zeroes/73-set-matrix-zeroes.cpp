class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if(matrix.size() == 1 && matrix[0].size() == 1){
            return;
        }
        int m = matrix.size(),n = matrix[0].size();
        int i,j;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                maxi = max(maxi,matrix[i][j]);
                mini = min(mini,matrix[i][j]);
            }
        }
        
        int compare;
        if(maxi == INT_MAX && mini == INT_MIN){
            compare = maxi -1;
        }
        else if(maxi == INT_MAX){
            compare = mini - 1;
        }
        else{
            compare = maxi + 1;
        }
            
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(matrix[i][j] == 0){
                    int x,y;
                    for(x=0;x<n;x++){
                        if(matrix[i][x] != 0 && matrix[i][x] != compare){
                            matrix[i][x] = compare;
                        }
                    }
                    
                    for(y=0;y<m;y++){
                        if(matrix[y][j] != 0 && matrix[y][j] != compare){
                            matrix[y][j] = compare;
                        }
                    }
                }
            }
        }
        
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(matrix[i][j] == compare){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};