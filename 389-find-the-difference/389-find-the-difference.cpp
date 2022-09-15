class Solution {
public:
    char findTheDifference(string s, string t) {
        int m,n;
        m = s.size(), n = t.size();
        char answer;
        int a=0,b=0;
        int i,j;
        if(m == 0){
            answer = t[0];
            return answer;
        }
        else{
            for(i=0;i<m;i++){
                a += (s[i]-97);
            }
            
            for(j=0;j<n;j++){
                b += (t[j]-97);
            }
            // cout << a << " " << b << "\n";
            int c = b-a;
            // cout << c << "\n";
            answer = c+97;
        }
        return answer;
    }
};