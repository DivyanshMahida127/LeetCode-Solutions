class Solution {
public:
    bool checkPalindromeFormation(string a, string b) {
        int n = a.length();
        int i,j;
        bool ap = false,bp = false;
        int r,s,t,k;
        if(n == 1){
            return true;
        }
        
        for(i=0;i<n/2;i++){
            if(a[i] == a[n-1-i]){
                ap = true;
            }
            else{
                ap = false;
                break;
            }
        }
        
        for(i=0;i<n/2;i++){
            if(b[i] == b[n-1-i]){
                bp = true;
            }
            else{
                bp = false;
                break;
            }
        }
        
        if(ap == true || bp == true){
            return true;
        }
        else{
            j = 0;
            for(i=0;i<n/2;i++){
                if(a[i] == b[n-1-i]){
                    j++;
                }
                else{
                    break;
                }
            }
            if(j == (n/2)){
                return true;
            }
            k = j;
            r = j,s=n-1-j;
            while(r != s){
                if(a[r] == a[s]){
                    j++;
                }
                else{
                    break;
                }
                r++;
                s--;
                if(j == (n/2)){
                    return true;
                }
            }
            if(j == (n/2)){
                return true;
            }
            
            j = k;
            r = j,s=n-1-j;
            while(r != s){
                if(b[r] == b[s]){
                    j++;
                }
                else{
                    break;
                }
                r++;
                s--;
                if(j == (n/2)){
                    return true;
                }
            }
            if(j == (n/2)){
                return true;
            }
            
            
            
            j = 0;
            for(i=0;i<n/2;i++){
                if(b[i] == a[n-1-i]){
                    j++;
                }
                else{
                    break;
                }
            }
            if(j == (n/2)){
                return true;
            }
            k = j;
            r = j,s=n-1-j;
            while(r != s){
                if(b[r] == b[s]){
                    j++;
                }
                else{
                    break;
                }
                r++;
                s--;
                if(j == (n/2)){
                    return true;
                }
            }
            if(j == (n/2)){
                return true;
            }
            
            j = k;
            r = j,s=n-1-j;
            while(r != s){
                if(a[r] == a[s]){
                    j++;
                }
                else{
                    break;
                }
                r++;
                s--;
                if(j == (n/2)){
                    return true;
                }
            }
            if(j == (n/2)){
                return true;
            }
        }
        return false;
    }
};