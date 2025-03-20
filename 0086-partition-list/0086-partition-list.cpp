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
    ListNode* partition(ListNode* head, int x) {
        ListNode* curr=head,*left=nullptr,*right=nullptr,*righthead=nullptr,*lefthead=nullptr;
        while(curr){
            if(curr->val>=x){
                ListNode* add=new ListNode(curr->val);
                if(right==nullptr){
                    right=add;
                    righthead=add;
                }else{
                    right->next=add;
                    right=add;
                }
            }else{
                ListNode* add=new ListNode(curr->val);
                if(left==nullptr){
                    lefthead=add;
                    left=add;
                }else{
                    left->next=add;
                    left=add;
                }
            }
            curr=curr->next;
        }
        if (lefthead == nullptr) return righthead;
        left->next=righthead;
        return lefthead;
    }
};