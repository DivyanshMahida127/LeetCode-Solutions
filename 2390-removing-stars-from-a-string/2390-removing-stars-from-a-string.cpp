class Solution {
public:
    string removeStars(string s) {
        string answer = "";
        int n = s.size();
        int i,j;
        
        j = 0;
        for(i=n-1;i>=0;i--){
            if(s[i] == '*'){
                j++;
            }
            else{
                if(j > 0){
                    s[i] = '*';
                    j--;
                }
            }
        }
        cout << s << "\n";
        
        for(i=0;i<n;i++){
            if(s[i] != '*'){
                answer += s[i];
            }
        }
        return answer;
    }
};