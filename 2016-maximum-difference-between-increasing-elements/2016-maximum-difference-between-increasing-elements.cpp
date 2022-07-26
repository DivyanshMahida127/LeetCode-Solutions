class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int i,j;
        j=0;
        int check;
        int answer = INT_MIN;
        for(i=1;i<n;i++){
            if(nums[i] == nums[j]){
                continue;
            }
            check = nums[i] - nums[j];
            if(check >= 0){
                answer = max(answer, check);
            }
            else{
                j = i;
            }
            // cout << i << " " << j << " " << answer << "\n";
        }
        
        if(answer < 0){
            return -1;
        }
        return answer;
    }
};