class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,bool> m;
        while(n!=1){
            n=makenew(n);
            if(m.find(n)!=m.end()) return false;
            m[n]=true;
        }
        return true;
    }
    int makenew(int x){
        int sum=0;
        while(x){
            sum+=(x%10)*(x%10);
            x/=10;
        }
        return sum;
    }
};
