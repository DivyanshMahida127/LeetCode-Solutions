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
    ListNode* oddEvenList(ListNode* head) {
        int n = 0;
        ListNode *temp = head;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        
        if(head == NULL){
            return head;
        }
        
        if((head->next) == NULL){
            return head;
        }
        
        if((head->next->next) == NULL){
            return head;
        }
        
        int i=0;
        ListNode *odd = head, *even = head->next;
        i=2;
        ListNode *add = even;
        
        temp = head->next->next;
        odd->next = NULL;
        while(temp != NULL && i <= n){
            i++;
            if((i%2) == 1){
                odd->next = temp;
                odd = temp;
                even->next = NULL;
            }
            else{
                even->next = temp;
                even = temp;
                odd ->next = NULL;
            }
            temp = temp->next;
        }
        odd->next = add;
        return head;
    }
};