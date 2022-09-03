class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        long long answer = 0;
        int i,n;
        n = milestones.size();
        
        if(n == 1){
            answer = 1;
            return 1;
        }
        
        int maximum = INT_MIN;
        for(i=0;i<n;i++){
            answer += milestones[i];
            maximum = max(maximum,milestones[i]);
        }
        
        answer -= maximum;
        if(maximum > answer){
            long long result = 2*answer;
            result++;
            return result;
        }
        answer += maximum;
        return answer;
    }
};