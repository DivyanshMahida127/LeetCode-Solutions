class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2 == 0){
            return n;
        }
        else{
            int answer = n*2;
            return answer;
        }
        return n;
    }
};