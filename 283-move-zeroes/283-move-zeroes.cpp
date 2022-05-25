class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return;
        }
        
        int i,j;
        j=0;
        while(nums[j] != 0){
            // cout << j << "\n";
            j++;
            if(j == n){
                break;
            }
        }
        // cout << j << "\n";
        if(j == n){
            return;
        }
        else{
            // cout << j;
            for(i=j+1;i<n;i++){
                if(nums[i] != 0){
                    swap(nums[i],nums[j]);
                    j++;
                }
            }
        }
        
    }
};