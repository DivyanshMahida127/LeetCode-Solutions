/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        int i;
        ListNode *a = node->next;
        ListNode *b = node;
        while(b != NULL){            
            b->val = a->val;

            if(a->next == NULL){
                b->next = NULL;
                b = b->next;
            }
            else{
                a = a->next;
                b = b->next;
            }
        }
    }
};