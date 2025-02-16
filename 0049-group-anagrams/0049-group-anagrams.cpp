#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<bool> seen(strs.size(), false);

        for (size_t i = 0; i < strs.size(); i++) {
            if (!seen[i]) {
                vector<string> temp;
                temp.push_back(strs[i]);
                seen[i] = true;

                for (size_t j = i + 1; j < strs.size(); j++) {
                    if (!seen[j] && isAnagram(strs[i], strs[j])) {
                        temp.push_back(strs[j]);
                        seen[j] = true;
                    }
                }
                ans.push_back(temp);
            }
        }
        return ans;
    }

    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        int arr[26] = {0};
        for (char c : s) {
            arr[c - 'a']++;
        }
        for (char c : t) {
            arr[c - 'a']--;
            if (arr[c - 'a'] < 0) return false;
        }
        return true;
    }
};
