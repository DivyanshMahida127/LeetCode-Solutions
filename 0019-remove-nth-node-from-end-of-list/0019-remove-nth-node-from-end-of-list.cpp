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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int m = 0;
        ListNode *temp = head;
        while(temp != NULL){
            m++;
            temp = temp->next;
        }
        n = m-n+1;
        temp = head;
        int j=0;
        ListNode *previous = NULL;
        while(temp != NULL){
            j++;
            if(j == n){
                if(previous != NULL){
                    previous->next = previous->next->next;
                    delete temp;
                    return head;
                }
                else{
                    previous = head;
                    head = head->next;
                    delete previous;
                    return head;
                }
            }
            previous = temp;
            temp = temp->next;
        }
        return head;
        
    }
};