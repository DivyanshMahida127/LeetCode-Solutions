class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int i,j;
        int a,b;
        int e,f;
        a = INT_MIN;
        for(i=0;i<n;i++){
            a = max(a,nums[i]);
            if(a == nums[i]){
                e = i;
            }
        }
        
        b = INT_MIN;
        for(i=0;i<n;i++){
            if(nums[i] < a){
                b = max(b,nums[i]);
            }
        }
        
        int c = a/2;
        
        if(c >= b){
            return e;
        }
        else{
            return -1;
        }
        return -1;
    }
};