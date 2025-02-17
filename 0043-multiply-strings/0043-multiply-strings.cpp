class Solution {
public:
    string multiply(string num1, string num2) {
        long long m1 = 1, ans = 0, carry = 0;
        
        // Loop over num1 from the last digit
        for (int i = num1.size() - 1; i >= 0; i--) {
            long long m2 = 1, temp = 0;
            carry = 0;
            for (int j = num2.size() - 1; j >= 0; j--) {
                int curr = (num2[j] - '0') * (num1[i] - '0') + carry;
                carry = curr / 10;
                int add = (curr % 10) * m2;
                temp += add;
                m2 *= 10;
            }
            if (carry != 0) {
                temp += carry * m2;
            }
            ans += temp * m1;
            m1 *= 10;
        }
        return to_string(ans);
    }
};
