class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        auto cmp = [](const vector<int> &a, const vector<int> &b){
            return a[0]+a[1] < b[0]+b[1];
        };
        priority_queue<vector<int>, vector<vector<int>>, decltype(cmp)> heap(cmp);
        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if(heap.size() < k){
                    heap.push({nums1[i], nums2[j]});
                }
                else if ((nums1[i]+nums2[j]) < (heap.top()[0]+heap.top()[1])){
                    heap.pop();
                    heap.push({nums1[i], nums2[j]});
                }
                else{
                    break;
                }
            }
        }
        vector<vector<int>> ans;
        while(!heap.empty()){
            ans.push_back(heap.top());
            heap.pop();
        }
        return ans;
    }
};
