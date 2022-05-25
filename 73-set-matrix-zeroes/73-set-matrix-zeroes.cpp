class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if(matrix.size() == 1 && matrix[0].size() == 1){
            return;
        }
        vector<int> row,column;
        int i,j;
        for(i=0;i<matrix.size();i++){
            for(j=0;j<matrix[0].size();j++){
                if(matrix[i][j] == 0){
                    row.push_back(i);
                    column.push_back(j);
                }
            }
        }
        
//         for(auto i:row){
//             cout << i << " ";
//         }
//         cout << "\n";
        
//         for(auto i:column){
//             cout << i << " ";
//         }
//         cout << "\n";
        
        if(row.size() != 0 || column.size() != 0){

            sort(row.begin(),row.end());
            sort(column.begin(),column.end());

            vector<int> finalr,finalc;
            int index;
            finalr.push_back(row[0]);
            for(i=1;i<row.size();i++){
                if(row[i] != row[i-1]){
                    finalr.push_back(row[i]);
                }
            }

            finalc.push_back(column[0]);
            for(j=1;j<column.size();j++){
                if(column[j] != column[j-1]){
                    finalc.push_back(column[j]);
                }
            }

            for(i=0;i<finalr.size();i++){
                index = finalr[i];

                j=0;
                while(j<matrix[0].size()){
                    matrix[index][j] = 0;
                    j++;
                }
            }

            for(i=0;i<finalc.size();i++){
                index = finalc[i];

                j=0;
                while(j<matrix.size()){
                    matrix[j][index] = 0;
                    j++;
                }
            }
        }
    }
};