class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int summation,answer,i,j,n;
        n = nums.size();
        answer = -1,summation = 0;
        for(i=0;i<n;i++){
            summation += nums[i];
        }
        
        if(n == 1){
            return 0;
        }
        else if(n == 2){
            if(nums[0] == 0 || nums[1] == 0){
                return 0;
            }
            else{
                return -1;
            }
        }
        
        summation -= nums[0];
        if(summation == 0){
            return 0;
        }
        // summation += nums[0];
        // summation -= nums[n-1];
        // if(summation == 0){
        //     return n-1;
        // }
        // summation += nums[n-1];
        // summation -= nums[0];
        answer = -1;
        int tillnow = 0;
        for(i=1;i<n;i++){
            tillnow += nums[i-1];
            summation -= nums[i];
            if(tillnow == summation){
                return i;
            }
        }
        return answer;
    }
};