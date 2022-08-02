class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size(),i,j;
        vector<int> filled(n+1,0);
        
        for(i=0;i<n;i++){
            filled[nums[i]]++;
        }
        
        vector<int> answer;
        
        for(i=1;i<n+1;i++){
            if(filled[i] == 0){
                answer.push_back(i);
            }
        }
        
        return answer;
        
    }
};