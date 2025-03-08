class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int left=points[0][0],right=points[0][1],ans=1;
        for(auto& i : points){
            if(i[0]> right){
                ans++;
                right=i[1];
                left=i[0];
            }else right = min(right, i[1]);
        }
        return ans;
    }
};