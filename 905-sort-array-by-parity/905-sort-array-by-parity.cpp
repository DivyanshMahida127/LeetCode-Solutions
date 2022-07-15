class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums;
        }
        else{
            int i,j;
            i=0;
            while(i < n){
                if(nums[i]%2 == 0){
                    if(i > 0){
                        j = i-1;
                        while(nums[j]%2 != 0){
                            swap(nums[j],nums[j+1]);
                            j--;
                            if(j < 0){
                                break;
                            }
                        }
                    }
                }
                i++;
            }
        }
        return nums;
    }
};