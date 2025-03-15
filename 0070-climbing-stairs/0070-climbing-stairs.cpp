class Solution {
public:
    int climbStairs(int n) {
        vector<int> v(n,0);
        if(n==1) return 1;
        if(n==2) return 2;
        v[0]=1;
        v[1]=2;
        for(size_t i=2;i<n;i++){
            v[i]=v[i-1] + v[i-2];
        }
        return v[n-1];
    }
};