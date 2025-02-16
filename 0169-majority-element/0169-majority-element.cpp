class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                mp[nums[i]]++;
            }else mp[nums[i]]=1;
        }
        map<int, int>::iterator it = mp.begin();
        int m=0,ans;
        while(it!=mp.end()){
            if(it->second>m){
                ans=it->first;
                m=it->second;
            }
            ++it;
        }
        return ans;
    }
};