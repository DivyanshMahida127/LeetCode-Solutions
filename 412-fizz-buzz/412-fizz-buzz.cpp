class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        string a,b,c;
        int i,d;
        a = "FizzBuzz";
        b = "Fizz";
        c = "Buzz";
        for(i=0;i<n;i++){
            if((((i+1)%3) == 0) && (((i+1)%5) == 0)){
                answer.push_back(a);
            }
            else if(((i+1)%3) == 0){
                answer.push_back(b);
            }
            else if(((i+1)%5) == 0){
                answer.push_back(c);
            }
            else{
                d = i+1;
                answer.push_back(to_string(d));
            }
        }
        return answer;
    }
};