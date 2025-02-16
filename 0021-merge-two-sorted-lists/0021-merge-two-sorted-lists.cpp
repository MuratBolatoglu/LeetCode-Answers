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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ret=NULL,*a,*ans;
        ListNode* curr1=list1;
        ListNode* curr2=list2;
        ans=ret;
        while(curr1!=nullptr && curr2!=nullptr){
            int add;
            if(curr1->val > curr2->val){
                add=curr2->val;
                curr2=curr2->next;
            }else{
                add=curr1->val;
                curr1=curr1->next;
            }
            if(ret==NULL){
                ret=new ListNode(add); 
                ans=ret;
            }else{
                a=new ListNode(add);
                ret->next=a;
                ret=a;
            }
        }
        while(curr1!=nullptr){
            if(ret==NULL){
                ret=new ListNode(curr1->val); 
                ans=ret;
            }else{
                a=new ListNode(curr1->val);
                ret->next=a;
                ret=a;
            }
            curr1=curr1->next;
        }
        while(curr2!=nullptr){
            if(ret==NULL){
                ret=new ListNode(curr2->val); 
                ans=ret;
            }else{
                a=new ListNode(curr2->val);
                ret->next=a;
                ret=a;
            }
            curr2=curr2->next;
        }
        return ans;
    }
};
