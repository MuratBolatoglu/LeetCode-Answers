class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        unordered_map<char,int> count;
        string temp;
        set<char> st;
        for(size_t i=0;i<s.size();i++){
            count[s[i]]++;
        }
        for(size_t i=0;i<s.size();i++){
            bool shouldbreak=true;
            st.insert(s[i]);
            count[s[i]]--;
            temp+=s[i];
            set<char>::iterator itr;
            for(itr=st.begin();itr!=st.end();itr++){
                if(count[*itr]!=0) shouldbreak=false;
            }
            if(shouldbreak){
                ans.push_back(temp.size());
                temp="";
                st.clear();
            }
        }
        if(temp!="") ans.push_back(temp.size());
        return ans;
    }
};
