class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ret;
        for(int i=0;i<=n;i++){
            ret.push_back(f(i));
        }
        return ret;
    }
    int f(int n) {
        int ans=0;
        while(n!=0){
            if(n%2==1) ans++;
            n/=2;
        }
        return ans;
    }
};
