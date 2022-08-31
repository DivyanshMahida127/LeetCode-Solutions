class Solution {
public:
    int binarysearch(vector<int> &arr, int l, int r, int x){
        if (r >= l) {
            int mid = l + (r - l) / 2;

            if (arr[mid] == x)
                return mid;

            if (arr[mid] > x)
                return binarysearch(arr, l, mid - 1, x);

            return binarysearch(arr, mid + 1, r, x);
        }

        return -1;
    }
    
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n = nums.size();
        int i,j,k,l;
        int answer = 0;
        for(i=0;i<n-2;i++){
            j = nums[i] + diff;
            k = binarysearch(nums,i+1,n-1,j);
            if(k != -1){
                j = j + diff;
                l = binarysearch(nums,k+1,n-1,j);
                if(l != -1){
                    answer++;
                }
            }
        }
        
        return answer;
    }
};