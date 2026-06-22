class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> nums;
        for (auto& i : operations) {
            if (i == "C") {
                nums.pop();
            }
            else if (i == "D") {
                nums.push(nums.top() * 2);
            }
            else if (i == "+") {
                int first = nums.top(); nums.pop();
                int second = nums.top();
                nums.push(first);
                nums.push(first + second);
            }
            else {
                nums.push(stoi(i));
            }
        }
        int sum = 0;
        while (!nums.empty()) {
            sum += nums.top();
            nums.pop();
        }
        return sum;
    }
};