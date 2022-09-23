class Solution {
public:
    bool backspaceCompare(string s, string t) {
        bool answer = true;
        int m = s.size(), n = t.size();
        int i,j;
        int x = 0,y = 0;
        
        j = 0;
        for(i=m-1;i>=0;i--){
            if(s[i] == '#'){
                j++;
            }
            else{
                if(j > 0){
                    s[i] = '#';
                    j--;
                }
                else{
                    x++;
                }
            }
        }
        
        j = 0;
        for(i=n-1;i>=0;i--){
            if(t[i] == '#'){
                j++;
            }
            else{
                if(j > 0){
                    t[i] = '#';
                    j--;
                }
                else{
                    y++;
                }
            }
        }
        cout << s << " " << t << "\n";
        cout << x << " " << y << "\n";
        if(x == y){
            if(x == 0 && y == 0){
                return true;
            }
            else{
                i=0,j=0;
                while(i < m && j < n){
                    while(s[i] == '#'){
                        i++;
                    }
                    
                    while(t[j] == '#'){
                        j++;
                    }
                    
                    if(s[i] == t[j]){
                        i++;
                        j++;
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        else{
            answer = false;
            return answer;
        }
        return answer;
    }
};