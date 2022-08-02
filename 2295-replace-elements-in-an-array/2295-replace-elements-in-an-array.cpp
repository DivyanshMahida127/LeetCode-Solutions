class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        int m = operations.size(),n = nums.size(),i,j,k;
        vector<int> index(1000001,0);
        
        for(i=0;i<n;i++){
            index[nums[i]] = i;
        }
        
        for(i=0;i<m;i++){
            j = operations[i][0];
            k = index[j];
            index[j] = -1;
            nums[k] = operations[i][1];
            index[operations[i][1]] = k;
        }
        
        return nums;
    }
};