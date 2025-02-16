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
        map<Node*,Node*> old_copy;
        Node* curr=head;
        while(curr!=nullptr){
            Node* copied=new Node(curr->val);
            old_copy[curr]=copied;
            curr=curr->next;
        }
        curr=head;
        while(curr!=nullptr){
           Node *copied=old_copy[curr]; 
           copied->next=old_copy[curr->next];
           copied->random=old_copy[curr->random];
           curr=curr->next;
        }
        return old_copy[head];
    }
};
