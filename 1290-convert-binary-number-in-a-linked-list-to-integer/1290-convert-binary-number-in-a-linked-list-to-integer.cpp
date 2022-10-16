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
    int getDecimalValue(ListNode* head) {
        ListNode *temp = head;
        int k = 0;
        while(temp != NULL){
            k++;
            temp = temp->next;
        }
        
        int answer = 0;
        int i=k-1,j;
        while(head != NULL){
            j = head->val;
            if(j == 1){
                answer += pow(2,i);
            }
            i--;
            head = head->next;
        }
        return answer;
    }
};