class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=INT_MIN,c=0;
        for(auto i : nums){
            if(i==0){
                ans=max(ans,c);
                c=0;
            }else c++;
        }
        return max(ans,c);
    }
};