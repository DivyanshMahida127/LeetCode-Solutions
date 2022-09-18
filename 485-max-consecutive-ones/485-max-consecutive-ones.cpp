class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int answer = 0;
        int i,j;
        int count, result;
        result = 0,count = 0;
        for(i=0;i<n;i++){
            if(nums[i] == 1){
                count++;
                result = max(result,count);
            }
            else{
                count = 0;
            }
        }
        return result;
    }
};