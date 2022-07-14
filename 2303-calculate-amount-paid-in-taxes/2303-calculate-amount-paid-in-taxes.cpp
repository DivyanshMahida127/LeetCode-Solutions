class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double answer,a,b,c;
        c = 100;
        if(income == 0){
            answer = 0;
            return answer;
        }
        else{
            answer = 0;
            int i,j;
            i=0;
            a = brackets[0][0];
            b = brackets[0][1];
            if(a < income){
                answer += ((a*b)/c);
                income -= a;
            }
            else{
                answer += ((income*b)/c);
                return answer;
            }
            
            i=1;
            while(income >= 0){
                a = brackets[i][0] - brackets[i-1][0];
                b = brackets[i][1];
                if(a < income){
                    answer += ((a*b)/c);
                    income -= a;
                }
                else{
                    answer += ((income*b)/c);
                    return answer;
                }
                
                
                i++;
            }
        }
        return answer;
    }
};