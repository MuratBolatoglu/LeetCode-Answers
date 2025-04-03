class Solution {
public:
    string countAndSay(int n) {
        string start = "1";
        for (int j = 0; j < n - 1; j++) {
            vector<vector<string>> c = counter(start);
            string temp = "";
            for (auto& i : c) {
                temp += i[0] + i[1];  // Concatenate count and character
            }
            start = temp;
        }
        return start;
    }

    vector<vector<string>> counter(string str) {
        vector<vector<string>> ret;
        int curr = 1;
        for (size_t i = 1; i < str.size(); i++) {
            if (str[i] == str[i - 1]) {
                curr++;
            } else {
                ret.push_back({to_string(curr), string(1, str[i - 1])}); // Store char as string
                curr = 1;
            }
        }
        ret.push_back({to_string(curr), string(1, str.back())});  // Add last counted group
        return ret;
    }
};
