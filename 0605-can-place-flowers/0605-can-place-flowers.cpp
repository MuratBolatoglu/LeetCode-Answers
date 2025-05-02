class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        f.push_back(0);
        f.insert(f.begin(), 0);
        for(auto& i : f) cout<<i<<" ";
        for(size_t i=1; i<f.size()-1;i++){
            if(f[i-1]==0 && f[i+1]==0 && f[i]==0){
                f[i]=1;
                n--;
            }
        }
        return n<=0;
    }
};