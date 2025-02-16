class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sumgas=0,sumcost=0;
        for(size_t i=0;i<gas.size();i++){
            sumgas+=gas[i];
            sumcost+=cost[i];
        }
        if(sumcost>sumgas) return -1;
        int ans=0,total=0;
        for(size_t i=0;i<gas.size();i++){
            total+=gas[i]-cost[i];
            if(total<0){
                ans=i+1;
                total=0;
            }
        }
        return ans;
    }
};
