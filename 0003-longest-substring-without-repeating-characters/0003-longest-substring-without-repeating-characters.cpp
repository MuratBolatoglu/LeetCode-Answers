#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        for(size_t i = 0; i < s.size(); i++) {
            unordered_map<char, bool> seen;
            int counter = 0;
            for(size_t j = i; j < s.size(); j++) {
                if(seen.find(s[j]) != seen.end()) {
                    ans = max(counter, ans);
                    break;
                } else {
                    seen[s[j]] = true;
                    counter++;
                }
            }
            ans = max(counter, ans);
        }
        return ans;
    }
};
