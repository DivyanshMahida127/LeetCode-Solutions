class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        int m = n/2;
        map<int,int> a;
        for(int i=0;i<n;i++){
            a[nums[i]]++;
            if(a[nums[i]] == m){
                return nums[i];
            }
        }
        return -1;
    }
};