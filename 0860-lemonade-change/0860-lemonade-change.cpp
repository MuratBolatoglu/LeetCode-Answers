class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int> m={{5,0},{10,0},{20,0}};
        for(auto& i : bills){
            m[i]++;
            int change=i-5;
            while(change != 0){
                if(change >= 20 && m[20]>0){
                    change-=20;
                    m[20]--;
                }else if(change >= 10 && m[10]>0){
                    change-=10;
                    m[10]--;
                }else if(change>=5 && m[5]>0){
                    change-=5;
                    m[5]--;
                }else return false;
            }
        }
        return true;
    }
};