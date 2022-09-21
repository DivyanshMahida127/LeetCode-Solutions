class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int i,j,k;
        j = INT_MIN;
        k = INT_MAX;
        for(i=0;i<n;i++){
            if(nums[i] == 1){
                return 1;
            }
            j = max(j,nums[i]);
            k = min(k,nums[i]);
        }
        return __gcd(j,k);
    }
};