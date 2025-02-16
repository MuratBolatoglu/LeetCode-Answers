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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int> pq;
        ListNode* ret=nullptr,*a;
        for(size_t i=0;i<lists.size();i++){
            ListNode *curr=lists[i];
            while(curr!=nullptr){
                pq.push(curr->val);
                curr=curr->next;
            }
        }
        while(!pq.empty()){
            if(ret==nullptr){
                ret=new ListNode(pq.top());
            }else{
                a= new ListNode(pq.top(),ret);
                ret=a;
            }
            pq.pop();
        }
        return ret;
    }
};
