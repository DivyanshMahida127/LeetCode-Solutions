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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return head;
        }
        else if((head->next)==NULL){
            return head;
        }
        int i;
        
        ListNode *Node = head;
        ListNode *tail = NULL;
        while(Node != NULL){
            i = Node->val;
            ListNode *add = new ListNode(i);
            if(tail == NULL){
                tail = add;
            }
            else{
                add->next = tail;
                tail = add;
            }
            Node = Node->next;
        }
        
        return tail;
    }
};