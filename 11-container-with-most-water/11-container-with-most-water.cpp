class Solution {
public:
    int maxArea(vector<int>& height) {
        int a,b;
        a = 0,b = height.size()-1;
        
        int result = INT_MIN;
        
        while(a<b){
            int x = min(height[a],height[b])*(b-a);
            
            result = max(result,x);
            
            if(height[a] < height[b]){
                a++;
            }
            else if(height[a] > height[b]){
                b--;
            }
            else{
                if(height[a+1]>height[b-1]){
                    a++;
                }
                else{
                    b--;
                }
            }
        }
        
        return result;
    }
};