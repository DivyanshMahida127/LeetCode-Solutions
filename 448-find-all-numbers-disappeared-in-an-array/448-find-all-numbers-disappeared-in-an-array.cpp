class Solution {
public:
    bool doitzero(vector<int> &nums,int i){
        int j = i,k;
        if(nums[j-1] == 0){
            nums[j-1] = j;
            return true;
        }
        else if(nums[j-1] == j){
            return true;
        }
        else{
            k = nums[j-1];
            nums[j-1] = j;
            return doitzero(nums,k);
        }
        return true;
    }
    
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size(),i,j,k;
        
        if(n == 1){
            vector<int> answer;
            return answer;
        }
        
        bool ans;
        int c;
        for(i=0;i<n;i++){
            if(nums[i] == (i+1) || nums[i] == 0){
                continue;
            }
            else{
                c = nums[i];
                ans = doitzero(nums,c);
                if(nums[i] == c){
                    nums[i] = 0;
                }
            }
        }
        
        for(i=0;i<n;i++){
            cout << nums[i] << " ";
        }
        cout << "\n";
        
        vector<int> answer;
        for(i=0;i<n;i++){
            if(nums[i] == 0){
                answer.push_back(i+1);
            }
        }
        return answer;
    }
};