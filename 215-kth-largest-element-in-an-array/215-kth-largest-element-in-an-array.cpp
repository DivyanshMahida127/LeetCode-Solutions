class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int mini,maxi;
        mini = INT_MAX,maxi = INT_MIN;
        int i,j;
        int n = nums.size();
        for(i=0;i<n;i++){
            mini = min(nums[i],mini);
            maxi = max(nums[i],maxi);
        }
        
        int answer;
        int m = maxi-mini+1;
        vector<int> check(m,0);
        
        for(i=0;i<n;i++){
            j = nums[i] - mini;
            check[j]++;
        }

        int index = -1;
        i=m-1;
        j=0;
        while(j < k){
            if(check[i] != 0){
                j += check[i];
                if(j >= k){
                    index = i;
                    break;
                }
            }
            i--;
        }
        
        if(mini >= 0){
            if(index == 0){
                return mini;
            }
            else if(index == (m-1)){
                return maxi;
            }
            answer = index + mini;
        }
        else{
            if(index == 0){
                return mini;
            }
            
            if(index == (m-1)){
                return maxi;
            }
            answer = index + mini;
        }
        return answer;
    }
};