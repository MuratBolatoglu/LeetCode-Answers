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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *s_tail=nullptr,*s_head=nullptr,*curr=head,*reth=nullptr,*rett=nullptr;
        int index=1;
        while(curr){
          if(index>=left && index<=right){
            if(s_head==nullptr){
              s_head=new ListNode(curr->val);
              s_tail=s_head;
            }else{
              ListNode *add=new ListNode(curr->val);
              add->next=s_head;
              s_head=add;
            } 
          }else if(index<left){
            if(reth==nullptr){
              reth=new ListNode(curr->val);
              rett=reth;
            }else{
              ListNode *add=new ListNode(curr->val);
              rett->next=add;
              rett=add;
            }
          }else{
            if(s_head==nullptr){
              s_head=new ListNode(curr->val);
              s_tail=s_head;
            }else{
              ListNode *add=new ListNode(curr->val);
              s_tail->next=add;
              s_tail=add;
            }
          }
          curr=curr->next;
          index++;
        }
        if (rett == nullptr) return s_head;
        else {
          rett->next = s_head;
          return reth;
        }
    }
};