class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int i,j;
        if(k == n){
            int sum = 0;
            for(i=0;i<n;i++){
                sum += cardPoints[i];
            }
            return sum;
        }
        else{
            if(k == 1){
                return max(cardPoints[0],cardPoints[n-1]);
            }
            else{
                int x=0,y=0;
                for(i=0;i<k;i++){
                    x += cardPoints[i];
                    y += cardPoints[n-1-i];
                }
                
                // cout << x << " " << y << "\n";
                
                int z;
                z = INT_MIN;
                
                i = k-1,j=n-1;
                while(i >= 0){
                    x = x-cardPoints[i]+cardPoints[j];
                    z = max(z,x);
                    i--;
                    j--;
                    // cout << x << " " << z << "\n";
                }
                // cout << z << "\n";
                
                i = n-k,j=0;
                while(i < n){
                    y = y-cardPoints[i]+cardPoints[j];
                    z = max(z,y);
                    i++;
                    j++;
                    // cout << y << " " << z << "\n";
                }
                // cout << z << "\n";
                return z;
            }
        }
    }
};