class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        if(n == 1){
            if(s == goal){
                return true;
            }
            else{
                return false;
            }
        }
        
        bool answer = false;
        s = s + s;
        
        string compare;
        int i;
        for(i=0;i<n;i++){
            compare = s.substr(i,n);
            if(compare == goal){
                return true;
            }
        }
        
        
        return answer;
    }
};