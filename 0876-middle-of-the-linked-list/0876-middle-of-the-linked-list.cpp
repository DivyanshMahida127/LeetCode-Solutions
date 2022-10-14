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
    ListNode* middleNode(ListNode* head) {
        ListNode *answer = head;
        int n = 0;
        while(answer != NULL){
            n++;
            answer = answer->next;
        }
        
        n /= 2;
        n++;
        
        answer = head;
        int i = 0;
        while(i <= n){
            i++;
            if(i == n){
                return answer;
            }
            answer = answer->next;
        }
        return answer;
    }
};