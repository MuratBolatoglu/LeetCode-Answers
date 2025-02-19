class Solution {
public:
vector<vector<int>> ans;
    vector<vector<int>> permute(vector<int>& num) {
        vector<int> x;
        generate(x,num);
        return ans;
    }
    void generate(vector<int>& curr,vector<int>& nums){
        if(nums.empty()){
            ans.push_back(curr);
            return;
        } 
        for(size_t i=0;i<nums.size();i++){
            vector<int> temp=curr;
            temp.push_back(nums[i]);
            vector<int> copy=nums;
            copy.erase(copy.begin()+i);
            generate(temp,copy);
        }
    }
};
