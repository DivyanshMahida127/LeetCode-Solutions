class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int a,b,i;
        a = -1;
        int indexa=-1;
        for(i=0;i<n;i++){
            if(nums[i] > a){
                a = nums[i];
                indexa = i;
            }
        }
        
        nums[indexa] = -1;
        b = -1;
        for(i=0;i<n;i++){
            b = max(b,nums[i]);
        }
        int answer = (a-1)*(b-1);
        return answer;
    }
};