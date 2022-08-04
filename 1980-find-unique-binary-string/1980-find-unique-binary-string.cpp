class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string answer;
        int n = nums.size();
        int i,j;
        
//         for(i=0;i<n;i++){
//             answer += '1';
//         }
        
//         cout << answer << "\n";
        
        
        int changedtill = -1;
        for(i=0;i<n;i++){
            if((nums[i][i]) == '1'){
                answer += '0';
            }
            else{
                answer += '1';
            }
        }
        
        // cout << answer << "\n";
        return answer;
    }
};