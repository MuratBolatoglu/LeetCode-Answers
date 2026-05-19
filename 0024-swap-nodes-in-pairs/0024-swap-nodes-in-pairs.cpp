class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* first=head;
        ListNode* second = (first == nullptr ? nullptr : first->next);

        while(first!=nullptr && second!=nullptr){
            int temp=first->val;
            first->val=second->val;
            second->val=temp;
            first = second->next;
            second = (first == nullptr ? nullptr : first->next);
        }
        return head;
    }
};