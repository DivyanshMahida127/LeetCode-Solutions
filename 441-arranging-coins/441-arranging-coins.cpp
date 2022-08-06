class Solution {
public:
    int binarysearch(int i,int j,vector<int> &sum,int n){
        if(i < j){
            int mid = (i+j)/2;
            if(sum[mid] == n){
                return mid;
            }
            else if(sum[mid] > n){
                return binarysearch(i,mid-1,sum,n);
            }
            else{
                return binarysearch(mid+1,j,sum,n);
            }
        }
        else if(i == j){
            return i;
        }
        return -1;
    }
    
    
    int arrangeCoins(int n) {
        vector<int> sum;
        long long i=0,j;
        int push;
        bool stop = false;
        while(stop == false){
            i++;
            j = i;
            if(i%2 == 0){
                j = i/2;
                j *= (i+1);
            }
            else{
                j = (i+1)/2;
                j *= i;
            }
            
            if(j >= INT_MAX){
                break;
            }
            else{
                push = j;
                sum.push_back(j);
            }
        }
        
        i=0;
        j=sum.size()-1;
        int answer = binarysearch(i,j,sum,n);
        
        if(n >= sum[answer]){
            return answer+1;
        }
        else{
            return answer;
        }
        return (answer+1);
    }
};