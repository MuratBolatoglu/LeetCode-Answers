class Solution {
public:
    string countAndSay(int n) {
        string start = "1";
        for (int j = 0; j < n - 1; j++) {
            vector<pair<int, char>> c = counter(start);
            string temp = "";
            for (auto& i : c) {
                temp += to_string(i.first) + i.second;
            }
            start = temp;
        }
        return start;
    }
    vector<pair<int, char>> counter(string str) {
        vector<pair<int, char>> ret;
        int curr = 1;
        for (size_t i = 1; i < str.size(); i++) {
            if (str[i] == str[i - 1]) curr++;    
            else {
                ret.push_back({curr, str[i - 1]});
                curr = 1;
            }
        }
        ret.push_back({curr, str.back()});
        return ret;
    }
};
