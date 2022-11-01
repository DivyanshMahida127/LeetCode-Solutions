class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int answer = 0;
        int i,j;
        int n = nums.size();
        map<int,int> a;
        for(i=0;i<n;i++){
            if(nums[i] > 0){
                a[nums[i]]++;
            }
        }
        
        j = 1;
        while(j != 0){
            if(a[j] == 0){
                return j;
            }
            j++;
        }
        return j;
    }
};