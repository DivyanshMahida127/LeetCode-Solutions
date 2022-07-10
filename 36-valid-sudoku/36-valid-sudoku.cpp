class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int i,j,k,l;
        int a;
        char b;
        
        for(i=0;i<9;i++){
            vector<int> check(10,0);
            for(j=0;j<9;j++){
                b = board[i][j];
                if(b >= 49 && b <= 57){
                    a = b-48;
                    if(check[a] == 0){
                        check[a]++;
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        
        for(i=0;i<9;i++){
            vector<int> check(10,0);
            for(j=0;j<9;j++){
                b = board[j][i];
                if(b >= 49 && b <= 57){
                    a = b-48;
                    if(check[a] == 0){
                        check[a]++;
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        
        for(i=0;i<9;i=i+3){
            for(j=0;j<9;j=j+3){
                vector<int> check(10,0);
                for(k=i;k<(i+3);k++){
                    for(l=j;l<(j+3);l++){
                        b = board[k][l];
                        if(b >= 49 && b <= 57){
                            a = b-48;
                            if(check[a] == 0){
                                check[a]++;
                            }
                            else{
                                return false;
                            }
                        }
                    }
                }
            }
        }
        
        return true;
    }
};