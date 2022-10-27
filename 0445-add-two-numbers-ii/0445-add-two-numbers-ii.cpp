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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp = NULL,*next = NULL,*a = NULL;
        temp = l1;
        next = l1->next;
        temp->next = NULL;
        while(next != NULL){
            a = next->next;
            
            next->next = temp;
            temp = next;
            next = a;
        }
        
        l1 = temp;
        
        // return temp;
        
        temp = l2;
        next = l2->next;
        temp->next = NULL;
        while(next != NULL){
            a = next->next;
            next->next = temp;
            temp = next;
            next = a;
        }
        
        l2 = temp;
        
        ListNode *t1 = l1,*t2 = l2;
        int m=0,n=0;
        while(t1 != NULL){
            m++;
            t1 = t1->next;
        }
        
        while(t2 != NULL){
            n++;
            t2 = t2->next;
        }
        
        if(m > n){
            t1 = l1;
            t2 = l2;
        }
        else if(m <= n){
            t1 = l2;
            t2 = l1;
        }
        
        ListNode *answer = t1;
        ListNode *tail; 
        int i=0,j=0;
        while(t1 != NULL){
            i += (t1->val);
            
            if(t2 != NULL){
                i += (t2->val);
            }
            
            j = i%10;
            i = i/10;
            t1->val = j;
            
            tail = t1;
            t1 = t1->next;
        
            if(t2 != NULL){
                t2 = t2->next;    
            }
        }
        
        if(i != 0){
            ListNode *add = new ListNode(i);
            i = 0;
            tail -> next = add;
        }
        
        temp = answer;
        next = answer->next;
        temp->next = NULL;
        while(next != NULL){
            a = next->next;
            
            next->next = temp;
            temp = next;
            next = a;
        }
        
        return temp;
        
        
    }
};