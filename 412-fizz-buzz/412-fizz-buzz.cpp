class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int i,j;
        vector<string> answer(n);
        string a,b,c,d;
        a = "FizzBuzz";
        b = "Fizz";
        c = "Buzz";
        for(i=0;i<n;i++){
            if((((i+1)%3) == 0) && (((i+1)%5) == 0)){
                answer[i] = a;
            }
            else if(((i+1)%3) == 0){
                answer[i] = b;
            }
            else if(((i+1)%5) == 0){
                answer[i] = c;
            }
            else{
                int d = i+1;
                answer[i] = to_string(d);
            }
        }
        return answer;
    }
};