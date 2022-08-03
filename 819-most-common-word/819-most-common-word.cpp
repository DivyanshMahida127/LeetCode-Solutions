class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int n = paragraph.length(),m = banned.size();
        int i,j,k;
        map<string,int> words,ban;
        
        for(i=0;i<m;i++){
            ban[banned[i]]++;
        }
        
        
        string word;
        for(i=0;i<n;i++){
            if(paragraph[i] >= 65 && paragraph[i] <= 90){
                word += (paragraph[i]+32);
            }
            else if(paragraph[i] >= 97 && paragraph[i] <= 122){
                 word += paragraph[i];
            }
            else{
                if(word != ""){
                    words[word]++;
                    word = "";
                }
            }
        }
        
        if(word != ""){
            words[word]++;
            word = "";
        }
    
        string answer;
        int max = 0;
        for(auto i:words){
            if(i.second > max){
                if(ban[i.first] == 0){
                    answer = i.first;
                    max = i.second;
                }
            }
        }
        
        return answer;
    }
};