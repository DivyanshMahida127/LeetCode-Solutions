class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n = nums.size();
        int i,j;
        int answer = 0;
        int one,zero;
        for(i=0;i<32;i++){
            one = 0,zero = 0;
            for(j=0;j<n;j++){
                if((nums[j]&1) == 1){
                    one++;
                }
                else{
                    zero++;
                }
                nums[j] = nums[j]>>1;
            }
            answer += zero*one;
        }
        return answer;
    }
};