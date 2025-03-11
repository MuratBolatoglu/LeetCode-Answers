class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int k=0;k<numRows;k++){
            if(k==0) ans.push_back({1});
            else if(k==1) ans.push_back({1,1});
            else{
                vector<int> temp={1};
                for(size_t i=0;i<ans[k-1].size()-1;i++){
                    temp.push_back(ans[k-1][i] + ans[k-1][i+1]);
                }
                temp.push_back(1);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};