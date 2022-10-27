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
    vector<int> nextLargerNodes(ListNode* head) {
        int n = 0;
        ListNode *temp = head;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        
        vector<int> answer(n,0);
        
        if(n == 1){
            return answer;
        }
        
        temp = head;
        ListNode *a;
        int i,j;
        j = -1;
        while(temp != NULL){
            j++;
            i = temp->val;
            a = temp->next;
            if(a == NULL){
                return answer;
            }
            else{
                while(a != NULL){
                    if((a->val) > i){
                        answer[j] = a->val;
                        break;
                    }
                    a = a->next;
                }
            }
            temp = temp->next;
        }
        return answer;
    }
};