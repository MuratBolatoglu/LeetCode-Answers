class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> prefix(nums.size(),0);
        unordered_map<int,int> m;
        int ans=0;

        for(size_t i =0;i<nums.size();i++){
            if(i==0) prefix[i]=nums[i];
            else prefix[i] =nums[i]+prefix[i-1];
            if(prefix[i] == k) ans++;
            int target = prefix[i] - k;
            if(m.find(target) != m.end()) 
                ans += m[target]; 
            m[prefix[i]]++; 
        }
        return ans;
    }
};