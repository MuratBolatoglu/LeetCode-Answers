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
    void reorderList(ListNode* head) {
        ListNode *curr= head;
        int len=0;
        while(curr!=nullptr){
            len++;
            curr=curr->next;
        }
        ListNode* first=nullptr,*second=nullptr,*ftail=nullptr;
        curr=head;
        for(int i=0;i<len/2;i++){
            if(first==nullptr){
                first=new ListNode(curr->val);
                ftail=first;
            }else{
                ListNode *temp=new ListNode(curr->val);
                ftail->next=temp;
                ftail=temp;
            }
            curr=curr->next;
        }
        while(curr!=nullptr){
            if(second==nullptr) second=new ListNode(curr->val);
            else second=new ListNode(curr->val,second);
            curr=curr->next;
        }
        ListNode *temp1 = first, *temp2 = second, *ret = nullptr, *tail = nullptr;
        while (temp1 != nullptr || temp2 != nullptr) {
            if (temp1 != nullptr) {
                if (ret == nullptr) {
                    ret = temp1;
                    tail = ret;
                } else {
                    tail->next = temp1;
                    tail = temp1;
                }
                temp1 = temp1->next;
            }
            if (temp2 != nullptr) {
                if (ret == nullptr) {
                    ret = temp2;
                    tail = ret;
                } else {
                    tail->next = temp2;
                    tail = temp2;
                }
                temp2 = temp2->next;
            }
        }
        curr=head;
        while(curr!=nullptr){
            curr->val=ret->val;
            ret=ret->next;
            curr=curr->next;
        }
    }
};
