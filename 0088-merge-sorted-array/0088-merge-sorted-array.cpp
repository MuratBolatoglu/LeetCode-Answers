class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int mc=0,nc=0;
        while(mc<m && nc<n){
            if(nums1[mc]<nums2[nc]){
                ans.push_back(nums1[mc]);
                mc++;
            }else{
                ans.push_back(nums2[nc]);
                nc++;
            }
        }
        while (mc < m) {
            ans.push_back(nums1[mc]);
            mc++;
        }
        while (nc < n) {
            ans.push_back(nums2[nc]);
            nc++;
        }
        nums1=ans;
    }
};