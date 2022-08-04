class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string answer;
        int n = nums.size(),i;
        char j;
        for(i=0;i<n;i++){
            j = nums[i][i];
            if(j == '1'){
                answer += '0';
            }
            else{
                answer += '1';
            }
        }
        
        return answer;
    }
};