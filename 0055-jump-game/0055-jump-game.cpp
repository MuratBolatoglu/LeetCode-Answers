class Solution {
public:
    bool canJump(vector<int>& nums) {
        int last=nums.size()-1;
        for(int i=last;i>=0;i--){
            if(i+nums[i]>=last) last=i;
        }
        return last==0;
    }
};
