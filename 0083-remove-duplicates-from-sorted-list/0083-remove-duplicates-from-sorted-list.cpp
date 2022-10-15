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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp = head;
        int i,j;
        ListNode *previous = NULL;
        while(temp != NULL){
            if(temp != head){
                i = previous->val;
                j = temp->val;
                if(i == j){
                    previous->next = temp->next;
                }
                else{
                    previous = temp;
                }
            }
            else{
                previous = temp;
            }
            temp = temp->next;
        }
        return head;
    }
};