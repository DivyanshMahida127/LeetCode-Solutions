class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i,j,n,count;
        n = arr.size();
        
        if(n == 1){
            return true;
        }
        else if(n == 2){
            if(arr[0] != arr[1]){
                return false;
            }
            else{
                return true;
            }
        }
        
        map<int,int> check; 
        
        if(arr[0] != arr[1]){
            check[1]++;
            count = 0;
        }
        else{
            count = 1;
        }
        
        for(i=1;i<n;i++){
            if(arr[i] == arr[i-1]){
                count++;
            }else{
                if(check[count] != 0){
                    return false;
                }
                else{
                    check[count]++;
                }
                count = 1;
            }
        }
        return true;
    }
};