class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pref(nums.size()),suff(nums.size()),ans;
        int add=1;
        for(int i=0;i<nums.size();i++){
            add *= nums[i];
            pref[i]=add;
        }
        add=1;
        for(int i=nums.size()-1;i>=0;i--){
            add *= nums[i];
            suff[i]=add;
        }
        for(size_t i=0;i<nums.size();i++){
            if(i==0) ans.push_back(suff[1]);
            else if(i==nums.size()-1) ans.push_back(pref[nums.size()-2]);
            else ans.push_back(pref[i-1]*suff[i+1]);
        }
        return ans;
    }
};