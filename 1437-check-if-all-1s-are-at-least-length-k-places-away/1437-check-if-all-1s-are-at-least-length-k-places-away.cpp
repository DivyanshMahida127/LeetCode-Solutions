class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        int i,j;
        bool answer = true;
        for(i=0;i<n;i++){
           if(nums[i] == 1){
               j=i;
               break;
           } 
        }
        
        for(i=j+1;i<n;i++){
            if(nums[i] == 1){
                if((i-j)<=k){
                    answer = false;
                    break;
                }
                else{
                    j = i;
                }
            }
        }
        return answer;
    }
};