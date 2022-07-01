class Solution {
public:
    string addStrings(string num1, string num2) {
        string answer;
        int m,n;
        m = num1.size()-1,n = num2.size()-1;
        
        int add = 0,a,b,remainder = 0;
        
        while(m > -1 && n > -1){
            a = num1[m]-48,b = num2[n]-48;
            // cout << a << " "<< b << "\n";
            add = a + b + remainder;
            // cout << add << "\n";
            if(add <= 9){
                answer += (add+48);
                remainder = 0;
                add = 0;
            }
            else{
                answer += ((add%10) + 48);
                remainder = add/10;
                add = 0;
            }
            m--,n--;
            // cout << answer << "\n";
        }
        
        if(m == -1 && n == -1){
            if(remainder != 0){
                answer += (remainder+48);
                remainder = 0;
            }
            
            reverse(answer.begin(),answer.end());
            return answer;
        }
        
        if(m > -1 && n == -1){
            while(m > -1){
                a = num1[m]-48;
                // cout << a << "\n";
                add = a + remainder;
                // cout << add << "\n";
                if(add <= 9){
                    answer += (add+48);
                    remainder = 0;
                    add = 0;
                }
                else{
                    answer += ((add%10) + 48);
                    remainder = add/10;
                    add = 0;
                }
                m--;
                // cout << answer << "\n";
            }
            
            if(remainder != 0){
                answer += (remainder+48);
            }
            
            reverse(answer.begin(),answer.end());
            return answer;
        }
        
        if(n > -1 && m == -1){
            while(n > -1){
                b = num2[n]-48;
                // cout << b << "\n";
                add = b + remainder;
                // cout << add << "\n";
                if(add <= 9){
                    answer += (add+48);
                    remainder = 0;
                    add = 0;
                }
                else{
                    answer += ((add%10) + 48);
                    remainder = add/10;
                    add = 0;
                }
                n--;
                // cout << answer << "\n";
            }
            
            if(remainder != 0){
                answer += (remainder+48);
            }
            
            reverse(answer.begin(),answer.end());
            return answer;
        }
        
        return answer;
    }
};