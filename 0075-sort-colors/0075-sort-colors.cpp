class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(size_t i=0;i<nums.size();i++){
            for(size_t j=i; j<nums.size();j++){
                if(nums[i]>nums[j]){
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
    }
};