class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int i,j,k;
        if(n == 3){
            int answer;
            answer = nums[0]+nums[1]+nums[2];
            return answer;
        }
        else{
            sort(nums.begin(),nums.end());
            int forward,backward;
            
            backward = INT_MIN;
            forward  = INT_MAX;
            
            int check;
            int a;
            for(i=0;i<n-2;i++){
                a = nums[i];
                j = i+1,k = n-1;
                while(j < k){
                    check = a+nums[j]+nums[k];
                    check -= target;
                    if(check == 0){
                        return target;
                    }
                    else if(check < 0){
                        backward = max(backward,target+check);
                        j++;
                    }
                    else if(check > 0){
                        forward = min(forward,target+check);
                        k--;
                    }
                }
            }
            int x,y;
            if(backward == INT_MIN){
                return forward;
            }
            
            if(forward == INT_MAX){
                return backward;
            }
            
            x = target - backward;
            y = forward - target;
            
            if(x == y){
                return backward;
            }
            else if(x > y){
                return forward;
            }
            else if(x < y){
                return backward;
            }
            
        }
        return target;
    }
};