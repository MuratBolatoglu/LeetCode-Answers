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
    int pairSum(ListNode* head) {
        ListNode* fast=head,*mid=head,*temp=nullptr,*curr=head;;
        while(fast != nullptr){
            fast=fast->next->next;
            mid=mid->next;
        }
        while(mid != nullptr){
            ListNode *add=new ListNode(mid->val);
            if(temp==nullptr) temp=add;
            else{
                add->next=temp;
                temp=add;
            }
            mid=mid->next;
        }
        int ans=INT_MIN;
        while(temp!=nullptr){
            ans=max(ans,temp->val + curr->val);
            curr=curr->next;
            temp=temp->next;
        }
        return ans;
    }
};