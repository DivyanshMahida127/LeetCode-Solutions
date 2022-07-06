class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string answer,check;
        int i,j,k;
        bool maybe = true;
        for(i=0;i<words.size();i++){
            check = words[i];
            j = 0,k = check.size()-1;
            maybe = true;
            while(j < k){
                if(check[j] != check[k]){
                    maybe = false;
                    break;
                }
                j++;
                k--;
            }
            
            if(maybe == true){
                answer = check;
                return answer;
            }
        }
        return answer;
    }
};