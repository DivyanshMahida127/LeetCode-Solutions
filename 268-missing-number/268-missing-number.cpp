class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(),i;
        int sum,result,answer;
        if(n%2 == 0){
            sum = (n/2)*(n+1);
        }
        else{
            sum = ((n+1)/2)*n;
        }
        result = 0;
        for(i=0;i<n;i++){
            result += nums[i];
        }
        answer = sum - result;
        return answer;
    }
};