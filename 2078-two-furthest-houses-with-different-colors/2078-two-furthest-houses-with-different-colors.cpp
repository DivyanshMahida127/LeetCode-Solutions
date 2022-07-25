class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int start,end,i,j,maxi,n;
        maxi = -1;
        start = 0,end = 0;
        n = colors.size();
        while(end <= (n-1)){
            if(colors[end] != colors[start]){
                maxi = max(maxi,(end-start));
            }
            end++;
        }
        
        start = n-1,end = n-1;
        while(end >= 0){
            if(colors[end] != colors[start]){
                maxi = max(maxi,(start - end));
            }
            end--;
        }
        // cout << maxi << "\n";
        return maxi;
    }
        
};