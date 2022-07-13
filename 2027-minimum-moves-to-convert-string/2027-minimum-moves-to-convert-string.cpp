class Solution {
public:
    int minimumMoves(string s) {
        int m = s.length();
        int i=0;
        int count = 0;
        while(i < m){
            if(s[i] == 'X'){
                count++;
                i = i+3;
            }
            else{
                i++;
            }
        }
        return count;
    }
};