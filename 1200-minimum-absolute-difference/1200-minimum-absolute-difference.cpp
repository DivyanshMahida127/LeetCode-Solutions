class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i,j,m,n;
        n = arr.size();
        vector<vector<int>> answer;
        if(n == 2){
            answer.push_back(arr);
            return answer;
        }
        else{
            int mini = INT_MAX;
            for(i=1;i<n;i++){
                mini = min(mini,arr[i]-arr[i-1]);
            }
            
            for(i=1;i<n;i++){
                if((arr[i]-arr[i-1])==mini){
                    answer.push_back({arr[i-1],arr[i]});
                }
            }
        }
        return answer;
    }
};