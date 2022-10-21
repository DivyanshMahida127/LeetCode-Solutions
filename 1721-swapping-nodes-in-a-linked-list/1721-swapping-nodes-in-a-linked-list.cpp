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
    ListNode* swapNodes(ListNode* head, int k) {
        
        int n = 0;
        ListNode *temp = head;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        int m;
        if((n%2) == 1){
            m = n/2;
            m++;
            if(m == k){
                return head;
            }
        }
        
        m = n/2;
        if((n%2)==1){
            m++;
        }
        
        if(k > m){
            k = n - k;
            k++;
        }
        
        int i,j;
        i=1,j=n;
        ListNode *pf = NULL;
        ListNode *pb = NULL;
        temp = head;
        while(temp != NULL){
            if((i+1) == k){
                pf = temp;
            }
            
            if((j-1) == k){
                pb = temp;
            }
            
            i++;
            j--;
            temp = temp->next;
        }
        
        if(pf == NULL){
            pf = pb->next;
            pb->next = head;
            pf->next = head->next;
            head-> next = NULL;
            return pf;
        }
        else{
            if((pf->next) == pb){
                temp = pb->next->next;
                pf->next = pb->next;
                pb->next->next = pb;
                pb->next = temp;
                return head;
            }
            temp = pf->next->next;
            pf->next->next = pb->next->next;
            pb->next->next = temp;
            
            temp = pb->next;
            pb->next = pf->next;
            pf->next = temp;
            
            return head;
        }
        return head;
    }
};