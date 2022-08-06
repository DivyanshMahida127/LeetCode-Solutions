class Solution {
public:    
    int arrangeCoins(int n) {
        long long i,j,k;
        long long check;
        i=1;j=n;
        while(i <= j){
            k = i+(j-i)/2;
            check = k*(k+1);
            check /= 2;
            
            if(check > n){
                j = k-1;
            }
            else if(check < n){
                i = k+1;
            }
            else{
                return k;
            }
        }
        return (int)j;
    }
};