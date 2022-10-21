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
        
        // Finding total size of Linked-list
        int n = 0;
        ListNode *temp = head;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        
        // If kth node from ending equals kth node from begining.
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
        
        // If value of k is greater than half size of array.
        if(k > m){
            k = n - k;
            k++;
        }
        
        
        // pb and pf pointing to the node previous of kth nodes.
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
            // if value of k is 1
            pf = pb->next;
            pb->next = head;
            pf->next = head->next;
            head-> next = NULL;
            return pf;
        }
        else{
            if((pf->next) == pb){
                // if kth nodes are next to each other.
                temp = pb->next->next;
                pf->next = pb->next;
                pb->next->next = pb;
                pb->next = temp;
                return head;
            }
            
            // if both node are not next to each other
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