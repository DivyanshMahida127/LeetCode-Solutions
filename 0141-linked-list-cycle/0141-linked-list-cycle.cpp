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
    bool hasCycle(ListNode *head) {
        int n = 10001;
        if(head == NULL){
            return false;
        }
        
        if((head->next) == NULL){
            return false;
        }
        
        if((head->next) == head){
            return true;
        }
        
        int i = 1;
        while(head != NULL){
            i++;
            head = head->next;
            if(i > n){
                return true;
            }
        }
        return false;
    }
};