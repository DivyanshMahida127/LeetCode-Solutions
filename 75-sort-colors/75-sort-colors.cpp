class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int a,b,c;
        a=0,b=0,c=0;
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                a++;
            }
            else if(nums[i] == 1){
                b++;
            }
            else{
                c++;
            }
        }
        
        int j=0;
        while(a != 0){
            nums[j] = 0;
            a--;
            j++;
        }
        
        while(b != 0){
            nums[j] = 1;
            b--;
            j++;
        }
        
        while(c != 0){
            nums[j] = 2;
            c--;
            j++;
        }
    }
};