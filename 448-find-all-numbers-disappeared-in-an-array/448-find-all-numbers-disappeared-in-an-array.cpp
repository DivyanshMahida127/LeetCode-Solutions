class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size(),i,j,k;
        
        if(n == 1){
            vector<int> answer;
            return answer;
        }
        bool check = false;
        while(check == false){
            for(i=0;i<n;i++){
                if((nums[i]-1) == i){
                    continue;
                }
                if(nums[i] == 0){
                    continue;
                }
                
                j = nums[i]-1;
                if(nums[j] == nums[i]){
                    nums[i] = 0;
                }
                else{
                    swap(nums[i],nums[j]);
                }
            }
            
            for(i=0;i<n;i++){
                if(nums[i] == (i+1) || nums[i] == 0){
                    check = true;
                }
                else{
                    check = false;
                    break;
                }
            }
        }
        
        vector<int> answer;
        for(i=0;i<n;i++){
            if(nums[i] == 0){
                answer.push_back(i+1);
            }
        }
        return answer;
    }
};