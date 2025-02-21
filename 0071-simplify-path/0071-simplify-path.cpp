class Solution {
public:
    string simplifyPath(string path) {
        string ans="",temp="";
        stack<string> paths;
        for (int i = 0; i <= path.size(); i++) {
            if (i == path.size() || path[i] == '/') {
                if (!temp.empty()) {
                    if (temp == "..") {
                        if (!paths.empty()) paths.pop();
                    } else if (temp != ".")  paths.push(temp);
                }
                temp = "";
            } else temp += path[i];
        }
        while(!paths.empty()){
            ans="/" + paths.top() + ans;
            paths.pop();
        }
        return ans=="" ? "/" : ans;
    }
};