class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        int i,j;
        int m = items1.size(),n = items2.size();
        vector<int> a(1000,0);
        for(i=0;i<m;i++){
            j=items1[i][0];
            a[j-1] += items1[i][1];
        }
        
        for(j=0;j<n;j++){
            i=items2[j][0];
            a[i-1] += items2[j][1];
        }
        
        vector<vector<int>> answer;
        for(i=0;i<a.size();i++){
            if(a[i]!=0){
                answer.push_back({(i+1),a[i]});
            }
        }
        return answer;
    }
};