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
    ListNode* partition(ListNode* head, int x) {
        if(head == NULL){
            return head;
        }
        
        if((head->next) == NULL){
            return head;
        }
        
        ListNode *temp = head;
        ListNode *less = NULL;
        ListNode *previous = NULL;
        int i;
        while(temp != NULL){
            i = temp->val;
            if(i < x){
                less = temp;
                break;
            }
            previous = temp;
            temp = temp->next;
        }
        
        int j,k;
        if(less == NULL){
            return head;
        }
        else if(less == head){
            previous = head;
            temp = previous->next;
            while(temp != NULL){
                i = temp -> val;
                if(i < x){
                    j = previous -> val;
                    if(j < x){
                        if(previous == less){
                            less = temp;
                        }
                        previous = temp;
                        temp = previous -> next;
                    }
                    else{
                        previous -> next = temp->next;
                        temp -> next = less -> next;
                        less -> next = temp;
                        less = temp;
                        
                        previous = temp;
                        temp = previous -> next;
                    }
                }
                else{
                    previous = temp;
                    temp = previous -> next;
                }
            }
        }
        else{
            previous -> next = less->next;
            less->next = head;
            head = less;
            
            previous = head;
            temp = previous->next;
            while(temp != NULL){
                i = temp -> val;
                if(i < x){
                    j = previous -> val;
                    if(j < x){
                        if(previous == less){
                            less = temp;
                        }
                        previous = temp;
                        temp = previous -> next;
                    }
                    else{
                        previous -> next = temp->next;
                        temp -> next = less -> next;
                        less -> next = temp;
                        less = temp;
                        
                        previous = temp;
                        temp = previous -> next;
                    }
                }
                else{
                    previous = temp;
                    temp = previous -> next;
                }
            }
        }
        
        return head;
    }
};