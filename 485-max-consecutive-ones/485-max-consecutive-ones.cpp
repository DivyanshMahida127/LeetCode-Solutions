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
            }
            else{
                result = max(result,count);
                count = 0;
            }
        }
        result = max(result,count);
        return result;
    }
};