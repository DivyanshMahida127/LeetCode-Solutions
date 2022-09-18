class Solution {
public:
    vector<int> countBits(int n) {
        int a = 0;
        vector<int> answer;
        int i,j,k;
        for(i=0;i<=n;i++){
            a = 0;
            j = i;
            while(j != 0){
                k = j&1;
                if(k == 1){
                    a++;
                }
                j = j>>1;
            }
            answer.push_back(a);
        }
        return answer;
    }
};