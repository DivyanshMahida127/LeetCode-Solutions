class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i,j;
        if(n == 1){
            return 0;
        }
        long long int answer = 0;
        j = (nums[0]+nums[n-1])/2;
        for(i=0;i<n;i++){
            answer += (max(nums[i],j)-min(nums[i],j));
        }
        
        long long int result = 0;
        j = nums[n/2];
        for(i=0;i<n;i++){
            result += (max(nums[i],j)-min(nums[i],j));
        }
        int output = min(result,answer);
        return output;
    }
};