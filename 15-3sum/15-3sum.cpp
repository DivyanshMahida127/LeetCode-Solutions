class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> answer;
        
        if(n <= 2){
            return answer;
        }
        else{
            sort(nums.begin(),nums.end());
            int i,j,k;
            for(i=0;i<n-2;i++){
                if(i > 0 && (nums[i] == nums[i-1])){
                    continue;
                }
                j = i+1;
                k = n-1;
                int x = nums[i];
                while(j < k){
                    int check = x+nums[j]+nums[k];
                    if(check == 0){
                        vector<int> a({nums[i],nums[j],nums[k]});
                        answer.push_back(a);
                        
                        int r = j,s = k;
                        j++,k--;
                        while(j < n && nums[r] == nums[j]){
                            j++;
                        }
                        
                        while(k >= 0 && nums[k] == nums[s]){
                            k--;
                        }
                    }
                    else if(check < 0){
                        j++;
                    }
                    else{
                        k--;
                    }
                }
            }
        }
        
        return answer;
    }
};