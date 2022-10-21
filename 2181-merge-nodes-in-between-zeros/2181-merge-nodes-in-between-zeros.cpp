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
    
    ListNode* mergeNodes(ListNode* head) {
        ListNode *temp = head, *previous = head;
        int i=0,j,k=0;
        while(temp != NULL){
            j = temp->val;
            i += j;
            
            if((temp->next) != NULL){
                if( ((temp->next)->val) == 0){
                    previous->val = i;
                    previous = previous->next;
                    i = 0;
                    k++;
                }
            }
            temp = temp->next;
        }
        cout << k;
        i=0;
        temp = head;
        while(temp != NULL){
            i++;
            if(i==k){
                temp->next = NULL;
                break;
            }
            temp = temp-> next;
        }
        
        return head;
    }
};