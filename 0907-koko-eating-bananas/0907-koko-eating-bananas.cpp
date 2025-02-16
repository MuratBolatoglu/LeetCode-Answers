class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) { 
        int ans = *max_element(piles.begin(), piles.end());
        int l=1,r=ans;
        while(l<=r){
            double hours=0;
            int mid=(l+r)/2;
            for(size_t i=0;i<piles.size();i++){
                hours+=ceil(static_cast<double>(piles[i]) / mid);
            }
            if(hours>h) l=mid+1;
            else if(hours<=h){
                r=mid-1;
                ans=mid;
            } 
        }
        return ans;
    }
};
