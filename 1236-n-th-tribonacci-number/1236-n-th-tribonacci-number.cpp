class Solution {
public:
    int tribonacci(int n) {
        int first=0,second=1,third=1;
        if(n==0) return first;
        if(n==1) return second;
        if(n==2) return third;
        for(int i=0;i<n-2;i++){
            int temp=second,temp2=third;
            third+=second+first;
            second=temp2;
            first=temp;
        }
        return third;
    }
};