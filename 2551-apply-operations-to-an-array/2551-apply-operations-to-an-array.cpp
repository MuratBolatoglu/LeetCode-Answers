class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(size_t i=0;i<n-1;i++){
            if(nums[i]==nums[i+1] && nums[i]!=0){
                ans.push_back(nums[i]*2);
                nums[i+1]=0;
            }   else if(nums[i] != 0) ans.push_back(nums[i]);
        }
        if(nums[n-1]!=0) ans.push_back(nums[n-1]);
        while(ans.size()<n) ans.push_back(0);
        return ans;
    }
};