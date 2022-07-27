class Solution {
public:
    int largestInteger(int num) {
        if(num <= 101){
            return num;
        }
        vector<int> odd,even;
        int i,j,remainder,m,count;
        m = num;
        count = 0;
        while(m != 0){
            remainder = m%10;
            if(remainder%2 == 0){
                even.push_back(remainder);
            }
            else{
                odd.push_back(remainder);
            }
            count++;
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
        for(i=0;i<result.size();i++){
            answer = answer*10+result[i];
        }
        return answer;
    }
};