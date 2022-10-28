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
    int numComponents(ListNode* head, vector<int>& nums) {
        int n = 0;
        ListNode *temp = head;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        
        vector<int> a(n,-1);
        
        int j,k;
        j = 0;
        temp = head;
        while(temp != NULL){
            k = temp->val;
            a[k] = j;
            j++;
            temp = temp->next;
        }
        
        vector<int> b(n,-1);
        
        for(auto i:nums){
            j = a[i];
            b[j] = 0;
        }
        
        k = 0;
        j = -1;
        for(auto i:b){
            if(i == 0){
                if(j == -1){
                    k++;
                    j = 1;
                }
            }
            else{
                if(j == 1){
                    j = -1;
                }
            }
        }
        return k;
    }
};