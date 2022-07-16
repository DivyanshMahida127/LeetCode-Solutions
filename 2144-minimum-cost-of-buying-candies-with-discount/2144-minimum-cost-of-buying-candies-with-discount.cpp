class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int i,j,n;
        n = cost.size();
        int answer = 0;
        if(n == 1){
            answer = cost[0];
            return answer;
        }
        else if(n == 2){
            answer = cost[0]+cost[1];
            return answer;
        }
        else{
            sort(cost.begin(),cost.end());
            i=n-1;
            while(i >= 0){
                answer += cost[i];
                if((i-1) >= 0){
                    answer += cost[i-1];
                }
                i = i-3;
            }
        }
        return answer;
    }
};