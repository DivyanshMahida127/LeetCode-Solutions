class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int answer = 0;
        int i,j,m,k;
        
        if(n == 1){
            return arr[0];
        }
        
        if(n == 2){
            return (arr[0]+arr[1]);
        }
        
        if(n == 3){
            return (2*arr[0]+2*arr[1]+2*arr[2]);
        }
        int add;
        for(i=0;i<n;i++){
            answer += arr[i];
        }
        
        for(i=3;i<=n;i+=2){
            // cout << i  << "\n";
            add = 0;
            j=0;
            while(j < i){
                add += arr[j];
                j++;
            }
            
            answer += add;
            // cout << add << "\n";
            
            j=0,k = i;
            while(k < n){
                add -= arr[j];
                add += arr[k];
                j++;
                k++;
                // cout << add << "\n";
                answer += add;
            }
        }
        return answer;
    }
};