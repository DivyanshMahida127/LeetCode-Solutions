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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL){
            return head;
        }
        int i;
        ListNode *temp = head;
        ListNode *previous = NULL;
        while(temp != NULL){
            i = temp->val;
            if(i == val){
                if(temp == head){
                    head = head->next;
                    previous = head;
                    temp = temp->next;
                }
                else{
                    previous->next = temp->next;
                    temp = temp->next;
                }
            }
            else{
                previous = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};