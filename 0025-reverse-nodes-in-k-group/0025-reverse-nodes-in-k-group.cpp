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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<ListNode*> v;
        ListNode *curr=head,*add=nullptr;
        int check=0;
        while(curr!=nullptr){
            if(add==nullptr){
                add=new ListNode(curr->val);
            }else add=new ListNode(curr->val,add);
            check++;
            if(check==k){
                v.push_back(add);
                add=nullptr;
                check=0;
            }
            curr=curr->next;
        }
        if (check != 0) {
            ListNode *remainder = nullptr;
            while (add != nullptr) {
                ListNode *temp = new ListNode(add->val);
                temp->next = remainder;
                remainder = temp;
                add = add->next;
            }
            v.push_back(remainder);
        }

        ListNode *ret=nullptr,*tail=nullptr;
        for(size_t i=0;i<v.size();i++){
            curr=v[i];
            while(curr!= nullptr){
                if(ret==nullptr){
                    ret=new ListNode(curr->val);
                    tail=ret;
                }else{
                    ListNode *x;
                    x=new ListNode(curr->val);
                    tail->next=x;
                    tail=x;
                }
                curr=curr->next;
            }
        }
        return ret;
    }
};
