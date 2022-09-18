class Solution {
public:
    int binarysearch(vector<int>& arr, int l, int r, int x){
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
    
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<int> a;
        for(auto i:score){
            a.push_back(i);
        }
        sort(a.begin(),a.end());
        
        vector<string> answer;
        int i,j;
        if(n == 1){
            answer.push_back("Gold Medal");
            return answer;
        }
        
        for(i=0;i<n;i++){
            int result = binarysearch(a,0,n-1,score[i]);
            if(result == (n-1)){
                answer.push_back("Gold Medal");
            }
            else if(result == (n-2)){
                answer.push_back("Silver Medal");
            }
            else if(result == (n-3)){
                answer.push_back("Bronze Medal");
            }
            else{
                result = n - result;
                string push = to_string(result);
                answer.push_back(push);
            }
        }
        return answer;
    }
};