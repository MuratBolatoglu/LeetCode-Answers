class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int l=0,r=n-1;
        sort(nums.begin(),nums.end());
        while(l<r){
            int sum = nums[l]+nums[r];
            if(sum<k)l++;
            else if(sum>k) r--;
            else{
                count++;
                l++;
                r--;
            }
        }
        return count;
    }
};