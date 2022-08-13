class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n = nums.size();
        int i,j;
        if(n == 1){
            return nums[0];
        }
        else{
            while(n != 1){
                j = 0;
                for(i=0;i<n;i=i+2){
                    if(j%2 == 0){
                        nums[j] = min(nums[i],nums[i+1]);
                    }
                    else{
                        nums[j] = max(nums[i],nums[i+1]);
                    }
                    j++;
                }
                
                for(i=j;i<nums.size();i++){
                    nums[i] = 0;
                }
                j++;
                
                n /= 2;
            }
        }
        return nums[0];
    }
};