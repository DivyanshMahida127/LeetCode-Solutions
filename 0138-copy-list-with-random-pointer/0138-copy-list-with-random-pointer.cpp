/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        vector<Node *> memory;
        vector<int> index;
        
        Node *a = head;
        Node *b = NULL;
        Node *random = NULL;
        int i,j,n=0;
        Node *h = NULL;
        Node *t = NULL;
        while(a != NULL){
            n++;
            
            random = a->random;
            b = head;
            j=0;
            while(b != random){
                b = b->next;
                j++;
            }
            
            index.push_back(j);
            
            i = a->val;
            
            Node *nn = new Node(i);
            if(h != NULL){
                t -> next = nn;
                t = nn;
            }
            else{
                h = nn;
                t = nn;
            }
            
            
            a = a->next;
            memory.push_back(nn);
        }
        
        a = h;
        i = 0;
        while(a != NULL){
            if(index[i] == n){
                a -> random = NULL;
            }
            else{
                a -> random = memory[index[i]];
            }
            i++;
            a = a->next;
        }
        
//         for(auto i:memory){
//             cout << i << " ";
//         }
//         cout << "\n";
        
//         for(auto i:index){
//             cout << i << " ";
//         }
        
        
        return h;
    }
};