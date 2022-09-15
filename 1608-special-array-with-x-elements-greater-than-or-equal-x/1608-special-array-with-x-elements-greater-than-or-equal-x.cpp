class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i,j,k;
        int answer = -1;
        for(i=0;i<n;i++){
            if(nums[i] == 0){
                continue;
            }
            
            if(i != 0){
                if(nums[i] == nums[i-1]){
                    continue;
                }
                else{
                    j = n-1-i+1;
                    if(nums[i] >= j && nums[i-1] < j){
                        answer = j;
                        return answer;
                    }
                }
            }
            else if(i == 0){
                j = n-1-i+1;
                if(nums[i] >= j){
                    answer = j;
                    return answer;
                }
            }
        }
        return answer;
    }
};