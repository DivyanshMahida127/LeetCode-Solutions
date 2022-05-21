class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            int key = nums[i];
            int j = i+1;
            while(j<n){
                if(nums[j] < key){
                    int temp = key;
                    nums[i] = nums[j];
                    key = nums[j];
                    nums[j] = temp;
                }
                j++;
            }
        }
    }
};