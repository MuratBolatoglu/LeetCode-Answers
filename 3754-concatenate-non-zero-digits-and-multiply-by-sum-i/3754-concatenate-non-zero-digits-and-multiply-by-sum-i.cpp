class Solution {
public:
    long long sumAndMultiply(int n) {
        long long temp=0,sum=0,mul=1;
        while(n){
            if(n%10!=0){
                temp+=(n%10)*mul;
                mul*=10;
                sum+=n%10;
            }
            n/=10;
        }
        return temp*sum;
    }
};