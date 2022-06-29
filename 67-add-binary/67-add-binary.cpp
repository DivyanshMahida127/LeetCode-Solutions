class Solution {
public:
    string addBinary(string a, string b) {
        string answer,add;
        int m,n,e;
        
        m = a.length(),n = b.length();
        
        if(m > n){
            reverse(b.begin(),b.end());
            e = m - n;
            while(e != 0){
                b += "0";
                e--;
            }
            reverse(b.begin(),b.end());
        }
        else if(m < n){
            reverse(a.begin(),a.end());
            e = n - m;
            while(e != 0){
                a += "0";
                e--;
            }
            reverse(a.begin(),a.end());
        }
        
        cout << a << " " << b;
        
        e = max(m,n);
        e--;
        int remainder = 0;
        
        while(e > -1){
            if(a[e] == '1'){
                remainder++;
            }
            
            if(b[e] == '1'){
                remainder++;
            }
            
            if(remainder == 0){
                add = "0";
                answer += add;
                remainder = 0;
            }
            else if(remainder == 1){
                add = "1";
                answer += add;
                remainder = 0;
            }
            else if(remainder == 2){
                add = "0";
                answer += add;
                remainder = 1;
            }
            else if(remainder == 3){
                add = "1";
                answer += add;
                remainder = 1;
            }
            e--;
        }
        
        if(remainder == 1){
            add = "1";
            answer += add;
        }
        
        reverse(answer.begin(),answer.end());
        
        return answer;
        
    }
};