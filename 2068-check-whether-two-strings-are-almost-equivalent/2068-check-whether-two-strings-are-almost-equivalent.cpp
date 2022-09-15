class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int n = word1.size();
        vector<int> a(26,0),b(26,0);
        int i,j;
        for(i=0;i<n;i++){
            a[word1[i]-97]++;
            b[word2[i]-97]++;
        }
        bool answer = true;
        for(i=0;i<26;i++){
            j = max(a[i],b[i])-min(a[i],b[i]);
            if(j > 3){
                return false;
            }
        }
        return answer;
    }
};