class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(size_t i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        unordered_map<int,int>::iterator it;
        for(it=m.begin();it!=m.end();++it){
            if(it->second !=1) return it->first;
        }
        return 0;
    }
};
