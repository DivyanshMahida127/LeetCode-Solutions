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
    ListNode* deleteMiddle(ListNode* head) {
        int n = 0;
        ListNode* temp = head;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        
        if(n == 1){
            ListNode *answer = NULL;
            return answer;
        }
        
        temp = head;
        int i = n/2;
        int j = -1;
        while(j < n){
            j++;
            if( (j+1) == i){
                ListNode *a = temp->next;
                ListNode *b = a->next;
                temp->next=b;
                break;
            }
            temp = temp -> next;
        }

        
        return head;
    }
};