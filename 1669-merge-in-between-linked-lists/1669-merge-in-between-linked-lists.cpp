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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int n = 0;
        ListNode *temp = list1;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        
        int i,j,k;
        ListNode *prev = NULL,*next = NULL;
        
        temp = list1;
        i = -1;
        while(temp != NULL){
            i++;
            if((i+1) == a){
                prev = temp;
            }
            
            if(i == (b+1)){
                next = temp;
            }
            temp = temp->next;
        }
        
        ListNode *tail = NULL;
        temp = list2;
        while(temp != NULL){
            tail = temp;
            temp = temp->next;
        }
        
        prev->next = list2;
        tail->next = next;
        // cout << prev->val << " " << next->val << "\n";
        return list1;
    }
};