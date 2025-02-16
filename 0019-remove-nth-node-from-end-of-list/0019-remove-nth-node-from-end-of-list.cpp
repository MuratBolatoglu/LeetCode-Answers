class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode* curr=head;
        while(curr!=nullptr){
            len++;
            curr=curr->next;
        }
        int index=len-n;
        if(index==0){
            head=head->next;
            return head;
        } 
        curr=head;
        for(size_t i=0;i<index-1;i++){
            curr=curr->next;
        }
        curr->next=curr->next->next;
        return head;
    }
};
