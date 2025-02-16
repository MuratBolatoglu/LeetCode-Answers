class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        for(int i=digits.size()-1;i>=0;i--){
            carry=(digits[i]+1)/10;
            digits[i]=(digits[i]+1)%10;
            if(carry==0) break;
            if(i==0 && carry!=0){
                digits.insert(digits.begin(),carry);
                return digits;
            }
        }
        return digits;
    }
};
