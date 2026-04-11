class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> counter;
        for(auto& i : s) counter[i]++;
        int max_odd=INT_MIN, min_even=INT_MAX;
        for(auto& i : counter){
            if(i.second%2 == 0) min_even=min(min_even,i.second);
            else max_odd=max(max_odd,i.second);
        }
        return max_odd - min_even;
    }
};