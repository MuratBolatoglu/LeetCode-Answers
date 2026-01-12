class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> s;
        vector<int> ret;
        for(auto& i : nums){
            if(s.find(i) == s.end()){
                ret.push_back(i);
                s.insert(i);
            } 
        } 
        nums=ret;
        return ret.size();
    }
};