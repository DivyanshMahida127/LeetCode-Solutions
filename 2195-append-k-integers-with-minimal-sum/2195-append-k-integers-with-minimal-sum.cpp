 class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        int n = nums.size(),i,j;
        long long answer = 0,a,b,c;
        long long remaining = k;
        
        if(n == 1){
            if(nums[0] == 1){
                c = (remaining+2)*(remaining+1);
                c /= 2;
                answer = (c-1);
                return answer;
            }
            else{
                c = nums[0] - 1;
                if(c == remaining){
                    answer = c*(c+1);
                    answer /= 2;
                    return answer;
                }
                else if(c > remaining){
                    answer = remaining*(remaining+1);
                    answer /= 2;
                    return answer;
                }
                else{
                    answer = c*(c+1);
                    answer /= 2;
                    remaining -= c;
                    b = nums[0];
                    c = nums[0]+remaining;
                    
                    b = b*(b+1);
                    b /= 2;
                    c = c*(c+1);
                    c /= 2;
                    answer += (c-b);
                    return answer;
                }
            }
        }
        
        sort(nums.begin(),nums.end());
        if(nums[0] > 1){
            a = nums[0]-1;
            if(a <= remaining){
                if(a%2 == 0){
                    answer = a/2;
                    answer *= (a+1);
                }
                else{
                    answer = (a+1)/2;
                    answer *= a;
                }
                remaining -= a;
            }
            else{
                if(k%2 == 0){
                    answer = k/2;
                    answer *= (k+1);
                }
                else{
                    answer = (k+1)/2;
                    answer *= k;
                }
                remaining = 0;
            }
        }
        
        
        if(remaining == 0){
            return answer;
        }
        
        j = 0;
        
        for(i=1;i<n;i++){
            a = nums[i]-nums[j]-1;
            if(a > 0){
                if(a <= remaining){
                    b = nums[i],c = nums[j];
                    b = b*(b+1);
                    b /= 2;
                    
                    c = c*(c+1);
                    c /= 2;
                    
                    answer += (b - c - nums[i]);
                    remaining -= a;
                }
                else{
                    b = nums[j];
                    c = b + remaining;
                    
                    b = b*(b+1);
                    b /= 2;
                    
                    c = c*(c+1);
                    c /= 2;
                    
                    answer += (c - b);
                    remaining = 0;
                }
                
                if(remaining <= 0){
                    break;
                }
            }
            if(remaining <= 0){
                break;
            }
            
            j++;
        }
        
        if(remaining > 0){
            b = nums[n-1];
            c = b + remaining;
            
            b = b*(b+1);
            b /= 2;

            c = c*(c+1);
            c /= 2;

            answer += (c - b);
        }
        return answer;
    }
};