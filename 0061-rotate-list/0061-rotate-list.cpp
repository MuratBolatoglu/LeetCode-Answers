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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next) return head;
        ListNode* current=head,*tail=nullptr,*prev=nullptr;
        int len=0;
        while(current->next != nullptr){
            len++;
            current=current->next;
        }
        len++;
        tail=current;
        current=head;
        k=k%len;
        if (!head || !head->next || k == 0) return head;
        int rot=len-k;
        for(int i=0;i<rot;i++){
            prev=current;
            current=current->next;
        }
        tail->next=head;
        prev->next=nullptr;
        head=current;
        return head;
    }
};