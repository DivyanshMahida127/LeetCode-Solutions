class Solution {
public:
    string digitSum(string s, int k) {
        string answer,a,b;
        int n = s.length();
        int i,j,m,remainder;
        bool done = false;
        if(n <= k){
            return s;
        }
        
        
        while(n > k){
            a="";
            j=0;
            m=0;
            for(i=0;i<n;i++){
                done = false;
                m = m + (s[i]-48);
                j++;
                if(j == k){
                    done = true;
                    b = "";
                    if(m == 0){
                        b = "0";
                    }
                    else{
                        while(m != 0){
                            remainder = m%10;
                            b += (remainder+48);
                            m /= 10;
                        }
                    }
                    j=0;
                    m=0;
                    reverse(b.begin(),b.end());
                    a += b;
                }
            }
            if(done == false){
                if(m == 0){
                    b = "0";
                }
                else{
                    b = "";
                    while(m != 0){
                        remainder = m%10;
                        b += (remainder+48);
                        m /= 10;
                    }
                }
                j=0;
                m=0;
                reverse(b.begin(),b.end());
                a += b;
            }
            s = a;
            n = s.length();
        }
        
        return s;
    }
};