class Solution {
public:
    int arrangeCoins(int n) {
        if(n <= 2){
            return 1;
        }
        else if(n <= 5){
            return 2;
        }
        else{
            int answer;
            bool result = false;
            long long i,j;
            j = 3;
            while(result == false){
                i = j;
                if(j%2 == 0){
                    i = j/2;
                    i *= (j+1);
                }
                else{
                    i = (j+1)/2;
                    i *= j;
                }
                
                
                if(i == n){
                    answer = j;
                    return j;
                }
                else if(i > n){
                    answer = j-1;
                    return (j-1);
                }
                else{
                    j++;
                }
            }
        }
        return 0;
    }
};