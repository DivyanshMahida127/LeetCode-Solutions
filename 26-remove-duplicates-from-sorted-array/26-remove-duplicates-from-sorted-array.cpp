class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int b = 1;
        for(int z = 1;z<n;z++){
            if(nums[z] != nums[z-1]){
                b++;
            }
        }
        
        // cout << b << "\n";
        
        int answer = 0;
        int j = 0;
        int compare = nums[j];
        j++;
        answer++;
        for(int i=1;i<n;i++){
            if(nums[i] != compare && nums[i] > compare){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                
                compare = nums[j];
                
                answer++;
                j++;
            }
            
            if(answer == b){
                break;
            }
        }
        return b;
    }
};