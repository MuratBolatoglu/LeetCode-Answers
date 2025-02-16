class Solution {
public:
    int findMin(vector<int> &nums) {
        int mins=nums[0];
        for(size_t i=1;i<nums.size();i++){
            if(nums[i]<mins) mins=nums[i];
        }
        return mins;
    }
};
