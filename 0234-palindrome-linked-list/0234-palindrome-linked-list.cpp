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
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        if(head->next==nullptr) return true;
        ListNode *mid=head,*fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            s.push(mid->val);
            mid=mid->next;
            fast=fast->next->next;
        }
        if (fast != nullptr) mid = mid->next;
        while(mid!=nullptr){
            if(mid->val != s.top()) return false;
            s.pop();
            mid=mid->next; 
        }
        return true;
    }
};