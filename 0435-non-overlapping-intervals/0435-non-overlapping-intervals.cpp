class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& inter) {
        if (inter.empty()) return 0;
        int ans=0;
        sort(inter.begin(), inter.end(), [](const vector<int>& i1, const vector<int>& i2) {
            return i1[0] < i2[0];
        });
        int end=inter[0][1];
        for(size_t i=1;i<inter.size();i++){
            if(inter[i][0]<end){
                ans++;
                end=min(inter[i][1],end);
            }     
            else end = inter[i][1];
        }
        return ans;
    }
};
