class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.empty()) return {};
        vector<string> ans;
        int left=nums[0];
        for(size_t i=0;i<nums.size()-1;i++){
            if(nums[i]+1 != nums[i+1]){
                if(left!=nums[i]) ans.push_back(to_string(left) + "->" + to_string(nums[i]));
                else ans.push_back(to_string(left));
                left=nums[i+1];
            }
        }
        if (left != nums.back()) ans.push_back(to_string(left) + "->" + to_string(nums.back())); 
        else ans.push_back(to_string(left));
        return ans;
    }
};