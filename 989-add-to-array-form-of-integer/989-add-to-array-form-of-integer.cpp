class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        int remainder = 0,add = 0,sum = 0;
        int m = n-1;
        vector<int> answer;
        while(k != 0 && m > -1){
            remainder = k%10;
            sum = remainder + num[m] + add;
            if(sum <= 9){
                num[m] = sum;
                add = 0;
            }
            else{
                num[m] = sum%10;
                add = sum/10;
            }
            k /= 10;
            m--;
        }
        
        if(k == 0){
            
            if(m == -1){
                if(add != 0){
                    num.push_back(add);
                    for(int i=n;i>=1;i--){
                        swap(num[i],num[i-1]);
                    }
                }
            }
            else{
//                 cout << m << " " << add << " ";
                
//                 cout << num.size() << "\n";
                while(m > -1 && add != 0){
                    sum = num[m] + add;
                    if(sum <= 9){
                        num[m] = sum;
                        add = 0;
                        break;
                    }
                    else{
                        num[m] = sum%10;
                        add = sum/10;
                    }
                    m--;
                }
                // cout << m << " " << add << " ";
                // cout << num.size() << "\n";
                
                if(add != 0 && m == -1){
                    num.push_back(add);
                    for(int i=n;i>=1;i--){
                        swap(num[i],num[i-1]);
                    }
                }
            }
            
            return num;
        }
        else{
            while(k != 0){
                remainder = k%10;
                sum = remainder + add;
                if(sum <= 9){
                    answer.push_back(sum);
                    add = 0;
                }
                else{
                    answer.push_back(sum%10);
                    add = sum/10;
                }
                k /= 10;
            }
            
            if(add != 0){
                answer.push_back(add);
                // for(int i=answer.size();i>=1;i--){
                //     swap(num[i],num[i-1]);
                // }
            }
            
            reverse(answer.begin(),answer.end());
            
            int i=0;
            while(i != n){
                answer.push_back(num[i]);
                i++;
            }
            
            return answer;
            
        }
        
        
        return num;
    }
};