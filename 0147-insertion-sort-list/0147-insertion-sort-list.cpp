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
        ListNode *h = head, *t = head;
        i=1;
        temp = head->next;
        while(temp != NULL){
            k = temp->val;
            if(t == head){
                if((head->val) > k){
                    head->next = temp->next;
                    temp->next = head;
                    
                    h = temp;
                    head = temp;
                    t = temp->next;
                    temp = temp->next;
                }
                else{
                    t = temp;
                }
            }
            else{
                // cout << h->val << " " << t->val << " " << temp->val << "\n";
                ListNode *next = h,*prev = h;
                j=0;
                while(j < i){
                    if((next->val) > k){
                        if(next == head){
                            t->next = temp->next;
                            temp->next = head;
                            head = temp;
                            
                            h = head;
                            t = t;
                            
                            break;
                        }
                        else{
                            t->next = temp->next;
                            prev->next = temp;
                            temp->next = next;
                            
                            break;
                        }
                    }
                    j++;
                    prev = next;
                    next = next->next;
                }
                
                // ListNode *print = head;
                // while(print != NULL){
                //     cout << print->val << " ";
                //     print = print->next;
                // }
                // cout << "\n";
                
                if((t -> next) == temp){
                    t = temp;
                }            
            }
            i++;
            if(temp == NULL){
                break;
            }
            
            temp = t->next;
        }
        return head;
    }
};