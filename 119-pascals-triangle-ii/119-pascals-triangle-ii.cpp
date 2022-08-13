class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int i,j,k,a;
        vector<int> answer;
        answer.push_back(1);
        
        if(rowIndex == 0){
            return answer;
        }
        else if(rowIndex == 1){
            answer.push_back(1);
            return answer;
        }
        answer.push_back(1);
        for(i=2;i<rowIndex+1;i++){
            a = answer[0];
            for(j=1;j<answer.size();j++){
                k = answer[j];
                answer[j] = a+answer[j];
                a = k;
            }
            answer.push_back(1);
        }
        
        return answer;
    }
};