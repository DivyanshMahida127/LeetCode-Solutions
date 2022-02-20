class Solution {
public:
    int minimumSum(int num) {
        vector<int> a(10,0);
        int sum;
        int x;
        while(num != 0){
            x = num%10;
            num /= 10;
            a[x]++;
        }
        
        int b[4];
        int j = 0,i;
        for(i=0;i<10;i++){
            while(a[i] != 0){
                b[j]  = i;
                j++;
                a[i]--;
            }
        }
        
        int y;
        x = b[0] + b[1];
        y = b[2] + b[3];
        
        if(y > 9){
            int tobeadd = y/10;
            x = x+tobeadd;
            y = y%10;
        }
        
        x = x*10 + y;
        return x;
    }
};