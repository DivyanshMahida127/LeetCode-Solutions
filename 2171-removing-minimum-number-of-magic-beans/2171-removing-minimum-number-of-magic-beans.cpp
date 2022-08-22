class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        long long n = beans.size();
        long long answer=0,k;
        if(n == 1){
            return answer;
        }
        long long i,j;
        vector<long long> a(n,0);
        sort(beans.begin(),beans.end());
        
        if(beans[0] == beans[n-1]){
            return answer;
        }
        
        a[0] = beans[0];
        for(i=1;i<n;i++){
            a[i] = a[i-1] + beans[i];
        }
        
        answer = INT_MAX,k=0;
        answer += INT_MAX;
        for(i=0;i<n;i++){
            k=0;
            if(i!=0){
                k += a[i-1];
            }
            
            for(j=i+1;j<n;j++){
                if(beans[j] != beans[i]){
                    j--;
                    break;
                }
            }
            if(j != n){
                i = j;
            }
            else{
                i = n-1;
            }
            
            k += a[n-1]-a[i];
            k -= long(beans[i])*(n-1-i);
            
            answer = min(k,answer);
        }
        return answer;
    }
};