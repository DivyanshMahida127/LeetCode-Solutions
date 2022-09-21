class Solution {
public:
    void sieve(vector<int> &sievevector,int n){
        int i,j;
        for(i=1;i<=n-1;i++){
            j=i;
            while(j <= n-1){
                sievevector[j]++;
                j =j+i;
            }
        }
        return;
    }
    
    bool isThree(int n) {
        int m = 10001;
        vector<int> sievevector(m,0);
        sieve(sievevector,m);
        if(sievevector[n] == 3){
            return true;
        }
        else{
            return false;
        }
        return false;
    }
};