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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode *t1=l1,*t2=l2,*ret=nullptr,*temp=nullptr;
        while(t1!=nullptr || t2!=nullptr || carry!=0){
            int a1=(t1==nullptr)? 0 : t1->val;
            int a2=(t2==nullptr)? 0 : t2->val;
            int add=a1+a2+carry;
            ListNode *node=new ListNode(add%10);
            carry=add/10;
            if(ret==nullptr){
                ret=node;
                temp=ret;
            }else{
                temp->next=node;
                temp=node;
            }
            if (t1 != nullptr) t1 = t1->next;
            if (t2 != nullptr) t2 = t2->next;
        }
        return ret;
    }
};
