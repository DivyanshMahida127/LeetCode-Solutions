class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        int i,j;
        if(n == 1){
            return nums[0];
        }
        else{
            while(n != 1){
                for(i=0;i<n-1;i++){
                    nums[i] = ((nums[i]+nums[i+1])%10); 
                }
                nums.erase(nums.begin()+n-1);
                n = nums.size();
            }
        }
        return nums[0];
    }
};