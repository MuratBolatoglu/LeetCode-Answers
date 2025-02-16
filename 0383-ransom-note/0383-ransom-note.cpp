class Solution {
public:
    bool canConstruct(string ransom, string magazine) {
        unordered_map<char,int> map;
        for(char i : magazine){
            map[i]++;
        }
        for(char i : ransom){
            if(map[i]==0) return false;
            map[i]--;
        }
        return true;
    }
};