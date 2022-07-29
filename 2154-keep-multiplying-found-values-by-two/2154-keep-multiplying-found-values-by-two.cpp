class Solution {
public:
    int bs(int start,int end, int original,vector<int> &nums){
        int mid = (start+end)/2;
        // cout << mid << " " << original << "\n";
        if(start<=end){
            if(nums[mid] < original){
                return bs(mid+1,end,original,nums);
            }
            else if(nums[mid] > original){
                return bs(start,mid-1,original,nums);
            }
            else if(nums[mid] == original){
                original = original*2;
                // cout << original <<  "\n";
                return bs(0,nums.size()-1,original,nums);
            }
        }
        return original;
    }
    
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        int n;
        n = nums.size();
        int start = 0,end = n-1;
        int answer = bs(start,end,original,nums);
        return answer;
    }
};