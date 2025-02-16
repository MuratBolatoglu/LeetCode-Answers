class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(size_t i=0;i<nums2.size();i++){
            int l=0,r=nums1.size()-1;
            while(l<=r){
                int mid=(l+r)/2;
                if(mid > 0 && nums1[mid - 1] <= nums2[i] && nums1[mid]>=nums2[i]){
                    nums1.insert(nums1.begin()+mid,nums2[i]);
                    break;
                }else if(nums1[mid]<nums2[i]){
                    l=mid+1;
                } else r=mid-1;
            }
            if (l > r) {
            nums1.insert(nums1.begin() + l, nums2[i]);
            }
        }
        for(size_t i=0;i<nums1.size();i++){
            cout<<nums1[i]<<" ";
        }
        double ans;
        if(nums1.size()%2==0){
            ans=(nums1[nums1.size()/2] + nums1[(nums1.size()/2)-1])/2.0;
            return ans;
        }else {
            ans=nums1[nums1.size()/2];
            return ans;
        }
    }
};
