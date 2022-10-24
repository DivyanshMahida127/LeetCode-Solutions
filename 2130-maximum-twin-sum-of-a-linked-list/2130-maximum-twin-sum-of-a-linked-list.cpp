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
    int pairSum(ListNode* head) {
        int n = 0;
        ListNode *temp = head;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        
        int answer = 0;
        if(n == 2){
            answer += head->val;
            head = head->next;
            answer += head->val;
            return answer;
        }
        else{    
            int till;
            till = n/2;
            
            int i = 0,j,k;
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
            next = next;
            
            k = 0;
            while(next != NULL && prev != NULL){
                i = next->val;
                j = prev->val;
                k = i+j;
                answer = max(answer,k);
                
                next = next->next;
                prev = prev->next;
            }
        }
        return answer;
    }
};