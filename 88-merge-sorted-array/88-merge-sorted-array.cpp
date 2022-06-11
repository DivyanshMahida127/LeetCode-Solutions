class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j;
        if(m == 0){
            for(i=0;i<n;i++){
                nums1[i] = nums2[i]; 
            }
            return;
        }
        else if(n == 0){
            return;
        }
        
        if(nums1[m-1] <= nums2[0]){
            for(i=0;i<n;i++){
                nums1[m+i] = nums2[i];
            }
            return;
        }
        else if(nums2[n-1] <= nums1[0]){
            i=m+n-1;
            for(j=m-1;j>=0;j--){
                nums1[i] = nums1[j];
                i--;
            }
            
            for(i=0;i<n;i++){
                nums1[i] = nums2[i];
            }
            return;
        }
        
        
        vector<int> a(m+n);
        int x,y;
        x = 0;
        for(i=0;i<m;i++){
            a[i] = nums1[x];
            x++;
        }
        
        y = 0;
        for(j=m;j<(m+n);j++){
            a[j] = nums2[y];
            y++;
        }
        
        i=0,j=m;
        x = 0;
        while(i != m && j != (m+n)){
            if(a[i] > a[j]){
                nums1[x] = a[j];
                j++;
                x++;
            }
            else if(a[i] < a[j]){
                nums1[x] = a[i];
                i++;
                x++;
            }
            else{
                nums1[x] = a[i];
                i++;
                x++;
            }
        }
        
        while(i != m && x != (m+n)){
            nums1[x] = a[i];
            i++;
            x++;
        }
        
        while(j != (m+n) && x != (m+n)){
            nums1[x] = a[j];
            j++;
            x++;
        }
        
    }
};