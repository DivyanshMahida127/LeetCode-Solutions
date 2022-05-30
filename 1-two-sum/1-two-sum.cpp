class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sorted(nums.size());
        int i,j;
        for(i=0;i<nums.size();i++){
            sorted[i] = nums[i];
        }
        
        sort(sorted.begin(),sorted.end());
        int answer;
        i=0,j=nums.size()-1;
        while(i<j){
            answer = sorted[i]+sorted[j];
            if(answer == target){
                break;
            }
            else if(answer < target){
                i++;
            }
            else{
                j--;
            }
        }
        
        vector<int> result;
        int a,b;
        if(sorted[i] == sorted[j]){
            for(a=0;a<nums.size();a++){
                if(nums[a] == sorted[i]){
                    result.push_back(a);
                    break;
                }
            }
            
            for(b=a+1;b<nums.size();b++){
                if(nums[b] == sorted[j]){
                    result.push_back(b);
                    break;
                }
            }
            
            
        }
        else{
            for(a=0;a<nums.size();a++){
                if(nums[a] == sorted[i]){
                    result.push_back(a);
                }
            }
            
            for(b=0;b<nums.size();b++){
                if(nums[b] == sorted[j]){
                    result.push_back(b);
                }
            }
        }
        
        return result;
    }
};