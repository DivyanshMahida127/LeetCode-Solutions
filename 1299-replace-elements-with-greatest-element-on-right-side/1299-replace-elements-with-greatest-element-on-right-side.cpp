class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int i;
        
        int maxi = -1,temp;
        for(i=n-1;i>=0;i--){
            temp = arr[i];
            arr[i] = maxi;
            maxi = max(maxi, temp);
        }
        
        return arr;
    }
};