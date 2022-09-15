class Solution {
public:
    char findTheDifference(string s, string t) {
        int m,n;
        m = s.size(), n = t.size();
        char answer;
        int i,j;
        vector<int> a(26,0),b(26,0);
        if(m == 0){
            answer = t[0];
            return answer;
        }
        else{
            for(i=0;i<m;i++){
                a[s[i]-97]++;
            }
            
            for(j=0;j<n;j++){
                b[t[j]-97]++;
            }
            
            for(i=0;i<26;i++){
                if((a[i]+1) == (b[i])){
                    answer = 97 + i;
                    return answer;
                }
            }
        }
        return answer;
    }
};