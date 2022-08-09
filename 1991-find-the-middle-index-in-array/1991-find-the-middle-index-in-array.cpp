class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int summation,answer,i,n;
        n = nums.size();
        answer = -1,summation = 0;
        for(i=0;i<n;i++){
            summation += nums[i];
        }
        
        if(n == 1){
            return 0;
        }
        
        summation -= nums[0];
        if(summation == 0){
            return 0;
        }

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