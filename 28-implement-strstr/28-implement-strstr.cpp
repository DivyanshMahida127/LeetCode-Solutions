class Solution {
public:
    int strStr(string haystack, string needle) {
        int answer = -1;
        int m = haystack.length(),n = needle.length();
        if(m == 1 && n == 1){
            if(haystack == needle){
                return 0;
            }
            else{
                return -1;
            }
        }
        if(n > m){
            return -1;
        }
        
        if(n == m){
            if(needle == haystack){
                return 0;
            }
            else{
                return -1;
            }
        }
        
        int i,j,k;
        for(i=0;i<(m-n+1);i++){
            if(haystack[i] == needle[0]){
                bool check = true;
                k=0;
                for(j=i;j<(i+n);j++){
                    if(haystack[j]!=needle[k]){
                        check = false;
                        break;
                    }
                    k++;
                }
                
                if(check == true){
                    answer = i;
                    return answer;
                }
                
            }
        }
        return answer;
    }
};