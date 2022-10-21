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
    ListNode *hd = NULL;
    ListNode *tail = NULL;
    
    void insert(int i){
        if(tail == NULL){
            ListNode *temp = new ListNode(i);
            tail = temp;
            hd = tail;
        }
        else{
            ListNode *temp = new ListNode(i);
            tail -> next = temp;
            tail = temp;
        }
    }
    
    ListNode* mergeNodes(ListNode* head) {
        ListNode *temp = head;
        int i=0,j;
        while(temp != NULL){
            j = temp->val;
            i += j;
            if((temp->next) != NULL){
                if( ((temp->next)->val) == 0){
                    insert(i);
                    i = 0;
                }
            }
            temp = temp->next;
        }
        
        return hd;
    }
};