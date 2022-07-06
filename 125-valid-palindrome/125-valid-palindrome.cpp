class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        if(n == 1){
            return true;
        }
        
        int i,j;
        string check;
        for(i=0;i<n;i++){
            if(s[i] >= 65 && s[i] <= 90){
                check += (s[i]-65+97);
            }
            else if(s[i] >= 97 && s[i] <= 122){
                check += s[i];
            }
            else if(s[i] >= 48 && s[i] <= 57){
                check += s[i];
            }
        }
        
        int m = check.length(); 
        
        bool answer = true;
        i=0;j=m-1;
        while(i < j){
            if(check[i] != check[j]){
                answer = false;
                break;
            }
            i++;
            j--;
            
        }
        
        return answer;
        
    }
};