class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        int m = n/2;
        vector<int> a(10001,0);
        int i;
        for(i=0;i<n;i++){
            a[nums[i]]++;
            if(a[nums[i]] == m){
                return nums[i];
            }
        }
        return -1;
    }
};