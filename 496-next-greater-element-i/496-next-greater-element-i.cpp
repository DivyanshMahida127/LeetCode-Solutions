class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(),n = nums2.size();
        int i,j;
        vector<int> a(m,0);
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(nums2[j] == nums1[i]){
                    break;
                }
            }
            
            int answer = -1;
            for(j=j+1;j<n;j++){
                if(nums2[j] > nums1[i]){
                    answer = nums2[j];
                    break;
                }
            }
            
            
            a[i] = answer;
        }
        return a;
    }
};