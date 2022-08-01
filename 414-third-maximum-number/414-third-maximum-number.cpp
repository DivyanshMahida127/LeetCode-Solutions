class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size(),i,j;
        if(n == 1){
            return nums[0];
        }
        else if(n == 2){
            return max(nums[0],nums[1]);
        }
        else{
            int s = 0;
            map<int,int> count;
            for(i=0;i<n;i++){
                if(count[nums[i]] == 0){
                    s++;
                    count[nums[i]]++;
                }
                
                if(s == 3){
                    break;
                }
            }
            if(s < 3){
                int answer = INT_MIN;
                for(i=0;i<n;i++){
                    answer = max(answer,nums[i]);
                }
                return answer;
            }
            
            vector<int> answer;
            
            for(auto i:count){
                answer.push_back(i.first);
            }
            
            // for(auto i:answer){
            //     cout << i << " ";
            // }
            // cout << "\n";
            int a,b,c;
            a = max(answer[0],max(answer[1],answer[2]));
            c = min(answer[0],min(answer[1],answer[2]));
            b = answer[0] + answer[1] + answer[2] - a - c;
            
            if(n == 3){
                if(a != b && b != c){
                    return c;
                }
                else{
                    return a;
                }
            }
            
            for(i=0;i<n;i++){
                if(nums[i] == a || nums[i] == b || nums[i] == c || nums[i] < c){
                    continue;
                }
                else{
                    if(nums[i] > c && nums[i] <  b){
                        c = nums[i];
                    }
                    else if(nums[i] > b && nums[i] < a){
                        c = b;
                        b = nums[i];
                    }
                    else if(nums[i] > a){
                        c = b;
                        b = a;
                        a = nums[i];
                    }
                }
            }
            
            if(a != b && b != c){
                return c;
            }
            else{
                return a;
            }
            return c;
        }
    }
};