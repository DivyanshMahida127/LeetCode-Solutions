class Solution {
public:
    int findComplement(int num) {
        int i,j;
        int answer = 0;
        for(i=0;i<32;i++){
            j = num&1;
            if(j == 0){
                answer += pow(2,i);
            }
            num = num>>1;
            if(num == 0){
                break;
            }
        }
        return answer;
    }
};