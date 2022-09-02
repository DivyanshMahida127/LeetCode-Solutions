class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> a(26,0);
        int m = tasks.size();
        int i,j,k;
        
        for(i=0;i<m;i++){
            j = tasks[i]-65;
            a[j]++;
        }
        
        // for(auto i:a){
        //     cout << i << " ";
        // }
        // cout << "\n";
        
        sort(a.begin(),a.end(),greater<int>());
        
        // for(auto i:a){
        //     cout << i << " ";
        // }
        // cout << "\n";
        
        j=0;
        int answer = 0;
        while(j < m){
            i=0;
            k=0;
            while(i < (n+1) && k < 26){
                if(a[k] > 0){
                    a[k]--;
                    j++;
                    i++;
                    answer++;
                }
                k++;
            }
            
            if(i <= (n+1) && j < m){
                answer += ((n+1)-i);
            }
            sort(a.begin(),a.end(),greater<int>()); 
        }
        return answer;
        
    }
};