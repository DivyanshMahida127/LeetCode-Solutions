class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> small,big;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] < pivot){
                small.push_back(nums[i]);
            }
            else if(nums[i] > pivot){
                big.push_back(nums[i]);
            }
            else{
                count++;
            }
        }
        
        while(count != 0){
            small.push_back(pivot);
            count--;
        }
        
        for(int j=0;j<big.size();j++){
            small.push_back(big[j]);
        }
        
        return small;
    }
};