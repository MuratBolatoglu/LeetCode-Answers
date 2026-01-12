class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int first=nums[0];
        vector<int> ret;
        ret.push_back(first);
        for(size_t i=1;i<nums.size();i++){
            if(nums[i-1] !=nums[i]){
                ret.push_back(nums[i]);
                first=nums[i];
            } 
        }
        nums=ret;
        return ret.size();
    }
};