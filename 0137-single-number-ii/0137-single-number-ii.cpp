class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto& i : nums) m[i]++;
        for(auto& i:m) if(m[i.first]==1) return i.first;
        return 0;
    }
};