class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extra) {
        vector<bool> ans;
        int m=*max_element(candies.begin(),candies.end());
        for(auto& i: candies){
            if(i+extra>=m) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};