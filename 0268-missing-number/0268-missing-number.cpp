class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int count=nums.size() *(nums.size()+1) /2;
        for(size_t i=0;i<nums.size();i++){
            count-=nums[i];
        }
        return count;
    }
};