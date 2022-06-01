class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int length;
        length = prices.size();
        int answer;
        answer = 0;
        for(int i=1;i<length;i++){
            if((prices[i] - prices[i-1]) > 0){
                answer += prices[i] - prices[i-1];
            }
        }
        return answer;
    }
};