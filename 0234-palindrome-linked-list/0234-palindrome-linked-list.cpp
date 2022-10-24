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
            
            int i = 0;
            temp = NULL;
            
            ListNode *next = NULL,*prev = NULL;
            while(i < till){
                i++;
                if(prev == NULL){
                    prev = head;
                    next = prev -> next;
                    temp = next;
                    prev->next = NULL;
                }
                else{
                    next = next->next;
                    temp->next = prev;
                    prev = temp;
                    temp = next;
                }
            }
            
            prev = prev;
            if((n%2) == 1){
                next = next->next;
            }
            
            int j;
            while(next != NULL && prev != NULL){
                i = next->val;
                j = prev->val;
                if(i != j){
                    return false;
                }
                next = next->next;
                prev = prev->next;
            }
        }
        return answer;
    }
};