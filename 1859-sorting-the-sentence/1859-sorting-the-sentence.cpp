class Solution {
public:
    string sortSentence(string s) {
        int n = s.size();
        int i,j,k,l;
        vector<int> a(9,-1);
        string answer;
        for(i=0;i<n;i++){
            if((s[i]-48) >= 0 && (s[i]-48) <= 9){
                a[s[i]-48-1] = i;
            }
        }
        
        // for(auto i:a){
        //     cout << i << " ";
        // }
        // cout << "\n";
        
        for(i=0;i<9;i++){
            if(a[i] == -1){
                break;
            }
            else{
                if(i != 0){
                    answer += " ";
                }
                j = a[i];
                k = a[i];
                while(s[j] != ' '){
                    j--;
                    if(j == -1){
                        break;
                    }
                }
                // cout << j << " " << k << "\n";
                j++;
                for(l=j;l<k;l++){
                    answer += s[l];
                }
            }
            
            // cout << answer << "\n";
        }
        return answer;
    }
};