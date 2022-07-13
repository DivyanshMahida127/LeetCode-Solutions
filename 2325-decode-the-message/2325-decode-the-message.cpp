class Solution {
public:
    string decodeMessage(string key, string message) {
        vector<char> a(26,0);
        int i,j,m,n,b;
        m = key.length(), n = message.length();
        
        j = 0;
        int count = 0;
        for(i=0;i<m;i++){
            b = key[i]-97;
            if(b >= 0 && b <= 25){
                if(a[b] == 0){
                    a[b] = j + 97;
                    j++;
                }
                
                if(j == 26){
                    break;
                }
            }
        }
        
        string answer;
        string c;
        for(i=0;i<n;i++){
            if(message[i] == ' '){
                answer += " ";
            }
            else{
                b = message[i]-97;
                c = a[b];
                answer += c;
            }
        }
        return answer;
    }
};