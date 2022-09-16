class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        bool answer = true;
        int n = s.size();
        int i,j;
        if(n == 1){
            return false;
        }

        answer = true;
        for(i=1;i<n;i++){
            if(s[i] != s[i-1]){
                answer = false;
                break;
            }
        }

        if(answer == true){
            return answer;
        }

        answer = false;
        int count;
        i=n/2;
        while(i != 0){
            count = 0;
            if(n%i == 0){
                string a,b;
                a = s.substr(0,i);
                count++;
                j=i;
                while(j < n){
                    b = s.substr(j,i);
                    if(b == a){
                        count++;
                    }
                    j += i;
                }

                if(count == (n/i)){
                    return true;
                }
            }
            i--;
        }
        return answer;
    }
};