class Solution {
public:
    int maxArea(vector<int>& h) {
        int maxarea=0,l=0,r=h.size()-1;
        while(l<r){
            int area=(r-l)*min(h[l],h[r]);
            if(h[r]>h[l]) l++;
            else r--;
            if(area>maxarea) maxarea=area;
        }
        return maxarea;
    }
};
