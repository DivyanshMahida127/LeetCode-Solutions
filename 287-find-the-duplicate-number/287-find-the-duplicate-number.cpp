class Solution {
public:
    int doitzero(vector<int> &nums,int i){
        int j = i,k;
        if(nums[j-1] == 0){
            nums[j-1] = j;
            return -1;
        }
        else if(nums[j-1] == j){
            return j;
        }
        else{
            k = nums[j-1];
            nums[j-1] = j;
            return doitzero(nums,k);
        }
        return -1;
    }
    
    int findDuplicate(vector<int>& nums) {    
        int m = nums.size(),i,j,k;
        int n = m - 1;
        if(n == 1){
            return 1;
        }
        
        int ans;
        int c;
        for(i=0;i<m;i++){
            if(nums[i] == (i+1) || nums[i] == 0){
                continue;
            }
            else{
                c = nums[i];
                nums[i] = 0;
                ans = doitzero(nums,c);
                
                if(ans != -1){
                    return ans;
                }
            }
        }
        
        return -1;
    }
};