class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int answer = 0;
        int m,n;
        m = mat.size();
        n = mat[0].size();
        if(m == 1 && n == 1){
            if(mat[0][0] == 1){
                answer++;
                return answer;
            }
            else{
                return answer;
            }
        }
        
        vector<int> row(n,0),column(m,0);
        int i,j;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(mat[i][j] == 1){
                    column[i]++;
                    row[j]++;
                }
            }
        }
        
        for(auto i:row){
            cout << i << " ";
        }
        cout << "\n";
        
        for(auto i:column){
            cout << i << " ";
        }
        cout << "\n";
        
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(column[i] == 1 && row[j] == 1){
                    if(mat[i][j] == 1){
                        answer++;
                    }
                }
            }
        }
        return answer;
    }
};