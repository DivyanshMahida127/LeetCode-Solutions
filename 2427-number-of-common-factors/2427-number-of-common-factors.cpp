class Solution {
public:
    int commonFactors(int a, int b) {
        int result = __gcd(a,b);
        int answer = 0;
        int i;
        for(i=1;i<=result;i++){
            if(result%i == 0){
                answer++;
            }
        }
        return answer;
    }
};