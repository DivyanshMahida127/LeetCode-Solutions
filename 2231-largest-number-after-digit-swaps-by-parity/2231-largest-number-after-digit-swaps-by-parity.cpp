class Solution {
public:
    int largestInteger(int num) {
        if(num <= 101){
            return num;
        }
        vector<int> odd,even;
        int i,j,remainder,m;
        m = num;
        while(m != 0){
            remainder = m%10;
            if(remainder%2 == 0){
                even.push_back(remainder);
            }
            else{
                odd.push_back(remainder);
            }
            m /= 10;
        }
        
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());

        i = 0;
        j = 0;
        m = num;
        vector<int> result;
        while(m != 0){
            remainder = m%10;
            if(remainder%2 == 0){
                result.push_back(even[i]);
                i++;
            }
            else{
                result.push_back(odd[j]);
                j++;
            }
            m/=10;
        }
        
        reverse(result.begin(),result.end());
        int answer = 0;
        m = result.size();
        for(i=0;i<m;i++){
            answer = answer*10+result[i];
        }
        return answer;
    }
};