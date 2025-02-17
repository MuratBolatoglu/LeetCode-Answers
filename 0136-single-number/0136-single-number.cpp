class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
        for(size_t i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(size_t i=0;i<nums.size();i++){
            if(mp[nums[i]]==1) return nums[i];
        }
        return 0;
    }
};
