class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int i;
        vector<vector<int>> answer(rowIndex+1);
        answer[0].push_back(1);
        
        for(i=1;i<rowIndex+1;i++){
            answer[i].push_back(1);
            if(i != 1){
                for(int j=0;j<answer[i-1].size()-1;j++){
                    int x = answer[i-1][j] + answer[i-1][j+1];
                    answer[i].push_back(x);
                }
            }
            answer[i].push_back(1);
        }
        
        vector<int> result;
        for(i=0;i<answer[rowIndex].size();i++){
            result.push_back(answer[rowIndex][i]);
        }
        return result;
    }
};