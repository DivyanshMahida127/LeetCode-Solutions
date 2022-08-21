class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n,i,j;
        n = nums.size();
        sort(nums.begin(),nums.end());
        if(n == 1){
            return 0;
        }
        if(nums[0] == nums[n-1]){
            return 0;
        }
        int answer=0,difference;
        answer = nums[n-1]-nums[0];
        for(i=n-2;i>=0;i--){
            nums[i] += answer;
            difference = nums[i]-nums[i+1];
            answer += difference;
        }
        return answer;
    }
};