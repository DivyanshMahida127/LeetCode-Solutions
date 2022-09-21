class Solution {
public:
    void sieve(vector<vector<int>> &sievevector,int n){
        int i,j;
        for(i=1;i<=n-1;i++){
            j=i;
            while(j <= n-1){
                sievevector[j].push_back(i);
                j =j+i;
            }
        }
        return;
    }
    
    string gcdOfStrings(string str1, string str2) {
        vector<vector<int>> sievevect(1001);
        sieve(sievevect,1001);
        
        int m,n,i,j;
        m = str1.size(),n = str2.size();
        int x = __gcd(m,n);
        string answer,compare;
        bool result = false;
        int y;
        
        int z = sievevect[x].size();
        for(i=z-1;i>=0;i--){
            y = sievevect[x][i];
            
            answer = str1.substr(0,y);
            result = true;
            for(j=0;j<m;j=j+y){
                compare = str1.substr(j,y);
                if(compare != answer){
                    result = false;
                    break;
                }
            }
            
            for(j=0;j<n;j=j+y){
                compare = str2.substr(j,y);
                if(compare != answer){
                    result = false;
                    break;
                }
            }
            
            
            if(result == true){
                return answer;
            }
        }
        
        if(result == false){
            answer = "";
        }
        
        return answer;
    }
};