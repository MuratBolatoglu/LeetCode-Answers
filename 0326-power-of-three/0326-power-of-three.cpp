class Solution {
public:
    bool isPowerOfThree(int n) {
        long a=1;
        while(a<n){
            a*=3;
        }
        return a==n;
    }
};