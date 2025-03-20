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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int> m;
        ListNode* ans=nullptr, *tail=nullptr, *curr=head;
        while(curr){
            m[curr->val]++;
            curr=curr->next;
        }
        curr = head;
        while(curr){
            if(m[curr->val] == 1){
                ListNode* add = new ListNode(curr->val);
                if(ans == nullptr){
                    ans = add;
                    tail = add;
                }else{
                    tail->next = add;
                    tail = add;
                }
            }
            curr = curr->next;
        }
        return ans;
    }
};
