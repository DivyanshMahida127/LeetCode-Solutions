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
    ListNode* insertionSortList(ListNode* head) {
        int n = 0;
        ListNode *temp = head;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        
        if(n == 1){
            return head;
        }
        
        int i,j,k;
        ListNode *tail = head;
        i=1;
        temp = head->next;
        while(temp != NULL){
            k = temp->val;
            if(i == 1){
                if((head->val) > k){
                    head->next = temp->next;
                    temp->next = head;
                    
                    head = temp;
                    tail = temp->next;
                    temp = temp->next;
                }
                else{
                    tail = temp;
                }
            }
            else{
                ListNode *next = head,*prev = head;
                j=0;
                while(j < i){
                    if((next->val) > k){
                        if(next == head){
                            tail->next = temp->next;
                            temp->next = head;
                            head = temp;
                            
                            break;
                        }
                        else{
                            tail->next = temp->next;
                            prev->next = temp;
                            temp->next = next;
                            
                            break;
                        }
                    }
                    j++;
                    prev = next;
                    next = next->next;
                }
                
                if((tail -> next) == temp){
                    tail = temp;
                }            
            }
            i++;
            if(temp == NULL){
                break;
            }
            
            temp = tail->next;
        }
        return head;
    }
};