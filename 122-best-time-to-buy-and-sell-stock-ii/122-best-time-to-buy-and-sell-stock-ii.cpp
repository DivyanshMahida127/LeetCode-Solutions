class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n == 1){
            return 0;
        }
        else if(n == 2){
            if(prices[0] < prices[1]){
                return prices[1]-prices[0];
            }
            else{
                return 0;
            }
        }
        else{
            int i,j;
            int result, answer,tillnow;
            answer = 0;
            i=0;
            while(i<n){
                j=i+1;
                result = 0;
                tillnow = 0;
                while(j < n){
                    result = prices[j] - prices[i];
                    if(prices[j] > prices[i] && result > tillnow){
                        tillnow = result;
                    }
                    else{
                        break;
                    }
                    j++;
                }
                answer = answer + tillnow;
                i=j;
            }
            if(answer <= 0){
                return 0;
            }
            else{
                return answer;
            }
        }
    }
};