class Solution {
public:
    vector<string> ans;
    string getHappyString(int n, int k) {
        generate(n,"",0);
        //sort(ans.begin(),ans.end());
        if(ans.size()<k) return "";
        return ans[k-1];
    }
    void generate(int target,string current,int len){
        vector<string> letters={"a","b","c"};
        if(len==target){
            ans.push_back(current);
            return;
        }
        if(current==""){
            for(auto& i : letters){
                generate(target,i,len+1);
            }
        }else{
            for(auto& i: letters){
                if(i != string (1,current[len-1])) generate(target,current+i,len+1);
            }
        }
    }
};