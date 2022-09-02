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
        long long tillnow = 0;
        // vector<long long> task(n,0);
        // for(i=0;i<n;i++){
        //     task[i] = tasks[i];
        // }
        
        map<int,int> a;
        map<int,long long> b;
        long long answer = 0;
        for(i=0;i<n;i++){
            
            tobeadded = 0;
            if(a.find(tasks[i]) == a.end()){
                a[tasks[i]] = i;
                tobeadded = 0;
            }
            else{
                j = a[tasks[i]];
                k = i-1;
                m = tillnow-b[tasks[i]];
                m += (k-j);
                if(m >= space){
                    tobeadded = 0;
                }
                else{
                    tobeadded = space-m;
                }
                a[tasks[i]] = i;
            }
            
            tillnow += tobeadded;
            b[tasks[i]] = tillnow;
            
        }
        answer = tillnow + n;
        return answer;
    }
};