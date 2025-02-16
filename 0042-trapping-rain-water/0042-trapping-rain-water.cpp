class Solution {
public:
    int trap(vector<int>& h) {
        int l=0,r=h.size()-1;
        int lmax=h[l],rmax=h[r],res=0;
        while(l<r){
            if(lmax<rmax){
                l++;
                lmax=max(h[l],lmax);
                res+=lmax-h[l];
            }else{
                r--;
                rmax=max(h[r],rmax);
                res+=rmax-h[r];
            }
        }
        return res;
    }
};