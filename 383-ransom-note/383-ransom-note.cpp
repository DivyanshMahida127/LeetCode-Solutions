class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool answer = true;
        
        vector<int> rn(26,0);
        vector<int> mz(26,0);
        
        int i,j,m,n;
        m = ransomNote.length(), n = magazine.length();
        
        for(i=0;i<m;i++){
            rn[ransomNote[i]-97]++;
        }
        
        for(j=0;j<n;j++){
            mz[magazine[j] - 97]++;
        }
        
        for(i=0;i<26;i++){
            if(mz[i] < rn[i]){
                return false;
            }
        }
        
        return answer;
    }
};