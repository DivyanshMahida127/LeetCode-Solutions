class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i,j,k,m,n,on,answer;
        m = nums1.size(),n = nums2.size();
        double result;
        if(m == 1 && n == 1){
            result = nums1[0]+nums2[0];
            result /= 2;
            return result;
        }
        else if(m == 1 && n == 0){
            result = nums1[0];
            return nums1[0];
        }
        else if(m == 0 && n == 1){
            result = nums2[0];
            return nums2[0];
        }
        int a,b=0;
        if((m+n)%2 != 0){
            a = (m+n)/2;
            a++;
        }
        else{
            a = (m+n)/2;
            b = a + 1;
        }
        bool done = false,completed = false;
        
        i=0;j=0,k=0,on,answer = 0;
        while(i < m && j < n){
            if(nums1[i] <= nums2[j]){
                on = nums1[i];
                k++;
                i++;
            }
            else{
                on = nums2[j];
                j++;
                k++;
            }
            
            if(k == a){
                answer += on;
                if(b == 0){
                    completed = true;
                    break;
                }
                else{
                    if(done == false){
                        a++;
                        done = true;
                    }
                }
            }
        }
        
        while(i < m && completed == false){
            on = nums1[i];
            k++;
            i++;
            
            if(k == a){
                answer += on;
                if(b == 0){
                    break;
                }
                else{
                    if(done == false){
                        a++;
                        done = true;
                    }
                }
            }
        }
        
        while(j < n && completed == false){
            on = nums2[j];
            j++;
            k++;
            
            if(k == a){
                answer += on;
                if(b == 0){
                    break;
                }
                else{
                    if(done == false){
                        a++;
                        done = true;
                    }
                }
            }
        }
        
        if(b == 0){
            result = answer;
            return result;
        }
        else{
            result = answer;
            return (result/2);
        }
    }
};