/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int n = 0;
        ListNode *temp = head;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        
        bool answer = true;
        if(n==1){
            return true;
        }
        else if(n == 2){
            if(head->val == (head->next)->val){
                return true;
            }
            else{
                return false;
            }
        }
        else{    
            int till;
            till = n/2;
            
            int i;
            string ans;
            temp = head;
            while(temp != NULL){
                i = temp->val;
                ans += to_string(i);
                temp=temp->next;
            }
            string result = ans;
            reverse(ans.begin(),ans.end());
            if(ans == result){
                return true;
            }
            else{
                return false;
            }
        }
        return answer;
    }
};