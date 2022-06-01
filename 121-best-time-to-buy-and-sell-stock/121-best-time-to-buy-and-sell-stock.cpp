class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n == 1){
            return 0;
        }
        else if(n == 2){
            if(prices[1] >= prices[0]){
                return prices[1]-prices[0];
            }
            else{
                return 0;
            }
        }
        else{
            int answer = INT_MIN;
            int result;
            int i,j;
            j = 0;
            for(i=1;i<n;i++){
                result = prices[i] - prices[j];
                answer = max(answer,result);
                
                if(result <= 0){
                    j=i;
                }
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