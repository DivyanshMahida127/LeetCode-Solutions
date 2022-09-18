class Solution {
public:
    int countVowelSubstrings(string word) {
        int n = word.size();
        int i,j;
        map<char,int> a;
        int answer = 0;
        for(j=0;j<n-4;j++){
            for(i=j;i<n;i++){
                if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
                    a[word[i]]++;
                    if(a['a'] != 0 && a['e'] != 0 && a['i'] != 0 && a['o'] != 0 && a['u'] != 0){
                        answer++;
                    }
                }
                else{
                    a.clear();
                    break;
                }
            }
            a.clear();
        }
        return answer;
    }
};