class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string check;
        int i,j,k;
        int n = words.size();
        bool maybe = true;
        for(i=0;i<n;i++){
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
                return check;
            }
        }
        return "";
    }
};