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
    ListNode* rotateRight(ListNode* head, int k) {
        int n = 0;
        ListNode *answer;
        ListNode *end;
        ListNode *temp = head;
        while(temp != NULL){
            n++;
            end = temp;
            temp = temp->next;
        }
        
        if(n == 0){
            return head;
        }
        
        k = k%n;
        if(k == 0){
            return head;
        }
        
        int i=0;
        k = n-k;
        temp = head;
        while(temp != NULL){
            i++;
            if(i == k){
                answer = temp->next;
                temp->next = NULL;
                end->next = head;
                return answer;
            }
            temp = temp->next;
        }
        return answer;
    }
};