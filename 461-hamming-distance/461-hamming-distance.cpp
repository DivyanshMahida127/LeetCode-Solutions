class Solution {
public:
    int hammingDistance(int x, int y) {
        int a,b;
        int answer = 0;
        while(x != 0 && y != 0){
            a = x&1;
            b = y&1;
            
            if(a != b){
                answer++;
            }
            x = x>>1;
            y = y>>1;
        }
        
        if(x != 0){
            while(x != 0){
                if((x&1) == 1){
                    answer++;
                }
                x = x>>1;
            }
        }
        
        if(y!= 0){
            while(y != 0){
                if((y&1) == 1){
                    answer++;
                }
                y = y>>1;
            }
        }
        
        return answer;
    }
};