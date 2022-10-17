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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *hl1 = list1;
        ListNode *hl2 = list2;
        int i,j;
        if(hl1 == NULL && hl2 != NULL){
            return hl2;
        }
        
        if(hl2 == NULL && hl1 != NULL){
            return hl1;
        }
        
        if(hl1 == NULL){
            ListNode *answer = NULL;
            return answer;
        }
        
        ListNode *head = NULL;
        ListNode *tail = NULL;
        ListNode *ahead1 = NULL;
        ListNode *ahead2 = NULL;
        i = hl1->val,j=hl2->val;
        if(i > j){
            head = hl2;
            tail = hl2;
            
            hl2 = hl2->next;
            
        }
        else if(i < j){
            head = hl1;
            tail = hl1;
            
            hl1 = hl1->next;
        }
        else{
            ahead1 = hl1->next;
            ahead2 = hl2->next;
            
            head = hl1;
            head->next = hl2;
            tail = hl2;
            
            hl1 = ahead1;
            hl2 = ahead2;
        }
        
        while(hl1 != NULL && hl2 != NULL){
            i = hl1->val;
            j = hl2->val;
            if(i > j){
                tail->next = hl2;
                tail = hl2;
                
                hl2 = hl2->next;
            }
            else if(i < j){
                tail -> next = hl1;
                tail = hl1;
                
                hl1 = hl1->next;
            }
            else{
                ahead1 = hl1->next;
                ahead2 = hl2->next;

                tail -> next = hl1;
                tail = hl1;
                tail ->next = hl2;
                tail = hl2;

                hl1 = ahead1;
                hl2 = ahead2;
            }
        }
        
        
        if(hl1 != NULL){
            while(hl1 != NULL){
                tail->next = hl1;
                tail = hl1;
                hl1 = hl1->next;
            }
        }
        
        if(hl2 != NULL){
            while(hl2 != NULL){
                tail->next = hl2;
                tail = hl2;
                hl2 = hl2->next;
            }
        }
        return head;
    }
};