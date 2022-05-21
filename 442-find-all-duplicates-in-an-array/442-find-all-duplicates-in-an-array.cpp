class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> answer;
        map<int,int> hash;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            hash[nums[i]]++;
            if(hash[nums[i]] == 2){
                answer.push_back(nums[i]);
            }
        }
        return answer;
    }
};