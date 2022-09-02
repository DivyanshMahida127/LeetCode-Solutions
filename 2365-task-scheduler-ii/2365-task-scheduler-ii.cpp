class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        int n = tasks.size();
        if(n == 1){
            return 1;
        }
        
        if(n == 2){
            if(tasks[0] == tasks[1]){
                return (2+space);
            }
            else{
                return 2;
            }
        }
        int i,j,k,m;
        long long tobeadded = 0;
        vector<long long> task(n,0);
        for(i=0;i<n;i++){
            task[i] = tasks[i];
        }
        
        map<int,int> a;
        long long answer = 0;
        for(i=0;i<n;i++){
            
            tobeadded = 0;
            if(a.find(task[i]) == a.end()){
                a[task[i]] = i;
                tobeadded = 0;
            }
            else{
                j = a[task[i]];
                k = i-1;
                m = task[k]-task[j];
                m += (k-j);
                if(m >= space){
                    tobeadded = 0;
                }
                else{
                    tobeadded = space-m;
                }
                a[task[i]] = i;
            }
            
            if(i != 0){
                task[i] = task[i-1] + tobeadded;
            }
            else{
                task[i] = 0;
            }
            
            
        }
        answer = task[n-1] + n;
        return answer;
    }
};