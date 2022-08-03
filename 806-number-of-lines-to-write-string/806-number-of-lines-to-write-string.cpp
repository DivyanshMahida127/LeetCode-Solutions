class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int n = s.length(),i,j;
        
        int level = 1;
        int value = 0;
        for(i=0;i<n;i++){
            j = s[i]-97;
            if((value + widths[j]) <= 100){
                // cout << level << " " << value << "\n";
                value +=  widths[j];
            }
            else{
                // cout << level << " " << value << "\n";
                level++;
                value = widths[j];
            }
        }
        vector<int> answer({level,value});
        return answer;
    }
};