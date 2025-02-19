class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> in;
        for(auto& i : nums){
            if(in.find(i) != in.end()) return true;
            in.insert(i);
        }
        return false;
    }
};