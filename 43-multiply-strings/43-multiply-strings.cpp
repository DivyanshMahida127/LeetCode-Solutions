class Solution {
public:
    string multiply(string num1, string num2) {
        
        string a,b,c;
        int m,n;
        
        if(num1.length() < num2.length()){
            a = num2, b = num1;
            
            m = a.length(), n = b.length();
        }
        else if(num1.length() > num2.length()){
            a = num1, b = num2;
            
            m = a.length(), n = b.length();
        }
        else if(num1.length() == num2.length()){
            if(num1 >= num2){
                a = num1, b = num2;
                m = a.length(),n = b.length();
            }
            else{
                a = num2, b = num1;
                m = a.length(), n = b.length();
            }
        }
        
//         int ca = 0,cb = 0;
//         for(auto z:a){
//             if(z == '0'){
//                 ca++;
//             }
//         }
        
//         for(auto z:b){
//             if(z == '0'){
//                 cb++;
//             }
//         }
        
//         if(ca == m || cb == n){
//             cout << "YES ||";
//             return "0";
//         }
        
        if(m == 1){
            if(a[0] == '0'){
                return "0";
            }
        }
        
        if(n == 1){
            if(b[0] == '0'){
                return "0";
            }
        }
        
        vector<string> str;
        vector<int> strlen;
        int maxi = INT_MIN;
        int x,y,multiply,remainder,add;
        
        int i,j;
        i=n-1;
        while(i >= 0){
            string mult;
            j = n-1-i;
            while(j != 0){
                mult = mult + "0";
                j--;
            }
            
            remainder = 0;
            
            x = (b[i]-48);
            j = m-1;
            while(j >= 0){
                y = (a[j]-48);
                multiply = (x*y) + remainder;
                if(multiply <= 9){
                    mult += (multiply+48);
                    multiply = 0;
                    remainder = 0;
                }
                else{
                    mult += ((multiply%10)+48);
                    remainder = multiply/10;
                    multiply = 0;
                }
                    
                j--;
            }
            
            if(remainder != 0){
                while(remainder != 0){
                    mult += ((remainder%10)+48);
                    remainder /= 10;
                }
            }
            
            str.push_back(mult);
            strlen.push_back(mult.length());
            int s = mult.length();
            maxi = max(maxi,s);
            
            i--;
        }
        
//         for(auto k:str){
//             cout << k << " ";
//         }
//         cout << "\n";
        
//         for(auto k:strlen){
//             cout << k << " ";
//         }
//         cout << "\n";
        
        string answer;
        i = 0;
        int totalstr = strlen.size();
        remainder = 0,add = 0;
        
        if(totalstr == 1){
            answer = str[0];
            reverse(answer.begin(),answer.end());
            return answer;
        }
        while(i < maxi){
            j = 0;
            add = 0;
            while(j < totalstr){
                if(i < strlen[j]){
                    add += str[j][i] - 48;
                }
                j++;
            }
            i++;
            
            add += remainder;
            
            if(add <= 9){
                answer += (add+48);
                add = 0;
                remainder = 0;
            }
            else{
                answer += ((add%10)+48);
                remainder = add/10;
                add = 0;
            }
        }
        // cout << answer << " " << remainder << "\n";
        
        if(remainder != 0){
            while(remainder != 0){
                answer += ((remainder%10)+48);
                remainder /= 10;
            }
        }
        // cout << answer << "\n";
        
        reverse(answer.begin(),answer.end());
        return answer;
    }
};