class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int a,b;
        b = 1,a = n-1;
        while(b == 1 && a>=0){
            if(digits[a] >= 0 && digits[a] <= 8){
                digits[a]++;
                b = 0;
                break;
            }
            else if(digits[a] == 9){
                digits[a] = 0;
            }
            a--;
        }
        
        if(b == 1 && a == -1){
            if(digits[0] == 0){
                digits.push_back(1);
                for(int i = n-1;i>=0;i--){
                    swap(digits[i+1],digits[i]);
                }
            }
            else{
                digits[0]++;
            }
        }
        
        return digits;
    }
};