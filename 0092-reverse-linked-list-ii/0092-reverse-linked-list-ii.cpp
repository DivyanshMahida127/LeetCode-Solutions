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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *l = NULL;
        ListNode *r = NULL;
        ListNode *back = NULL;
        
        int i = 0;
        ListNode *node = head;
        while(node != NULL){
            i++;
            if(i == left){
                l = node;
            }
            
            if(i == right){
                r = node;
            }
            
            if((i+1) == left){
                back = node;
            }
            node = node->next;
        }
        ListNode *answer = l;

        
        if(l == r){
            return head;
        }
        
        ListNode *ahead = r->next;
        ListNode *pointer = NULL;
        while(l != r){
            pointer = l->next;
            l->next = ahead;
            ahead = l;
            l = pointer;
        }
        
        pointer->next=ahead;
        
        if(left == 1){
            return pointer;
        }
        else{
            back->next = pointer;
        }
        
        return head;
    }
};