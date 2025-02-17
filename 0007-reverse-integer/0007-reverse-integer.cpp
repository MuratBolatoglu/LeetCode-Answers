class Solution {
public:
    int reverse(int x) {
        long y=x;
        if(x<0) y*=(-1);
        string str=to_string(y);
        std::reverse(str.begin(), str.end());
        y=std::stol(str);
        if(x<0) y*=(-1);
        if(y>2147483647 || y<-2147483648) return 0;
        return y;
    }
};
