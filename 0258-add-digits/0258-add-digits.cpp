class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
            int sum=0,temp=num;
            while(temp){
                sum+=temp%10;
                temp/=10;
            }
            num=sum;
        }
        return num;
    }
};