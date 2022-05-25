class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> answer;
        map<vector<int>,int> hash;
        if(n <= 2){
            return answer;
        }
        else{
            sort(nums.begin(),nums.end());
            int i,j,k;
            for(i=0;i<n-2;i++){
                j = i+1;k = n-1;
                while(j < k){
                    int check = nums[i]+nums[j]+nums[k];
                    // cout << check << " " << nums[i] << " " << nums[j] << " " << nums[k] << "\n";
                    if(check == 0){
                        vector<int> a({nums[i],nums[j],nums[k]});
                        hash[a]++;
                        
                        if(hash[a] == 1){
                            answer.push_back(a);
                        }
                        j++;
                        k--;
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