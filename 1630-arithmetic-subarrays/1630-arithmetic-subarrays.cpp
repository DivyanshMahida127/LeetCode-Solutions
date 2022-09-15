class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int m,n,le;
        n = nums.size();
        m = l.size();
        int i,j,k,diff;
        vector<bool> answer;
        bool a;
        for(i=0;i<m;i++){
            a = true;
            vector<int> check;
            for(j=l[i];j<=r[i];j++){
                check.push_back(nums[j]);
            }
            sort(check.begin(),check.end());
            le = check.size();
            diff = check[1]-check[0];
            // for(auto i:check){
            //     cout << i << " ";
            // }
            // cout << "\n";
            for(k=1;k<le;k++){
                if((check[k]-check[k-1])!=diff){
                    // cout << check[k] << " " << check[k-1] << "\n";
                    a = false;
                    break;
                }
            }
            
            answer.push_back(a);
        }
        return answer;
    }
};