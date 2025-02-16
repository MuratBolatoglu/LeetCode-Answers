class Solution {
public:
    int carFleet(int target, vector<int>& pos, vector<int>& speed) {
        vector<float> time;
        for(size_t i=0;i<pos.size();i++){
            time.push_back((target-pos[i]) / static_cast<float>(speed[i]));
        }
        vector<pair<int, float>> pos_time;
        for(size_t i=0;i<pos.size();i++){
            pos_time.push_back({pos[i],time[i]});
        }
        sort(pos_time.rbegin(), pos_time.rend());
        for (int i = 0; i < pos.size(); ++i) {
            time[i] = pos_time[i].second;
        }
        int fleet = 1;
        float maxTime = time[0];
        for (int i = 1; i < pos.size(); ++i) {
            if (time[i] > maxTime) {
                fleet++;
                maxTime = time[i];
            }
        }

        return fleet;
    }
};
