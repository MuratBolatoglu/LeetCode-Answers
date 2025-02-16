class Solution {
public:
    vector<string> generateParenthesis(int n) {
        int len=n*2;
        vector<string> ans;
        generate("",len,ans);
        return ans;
    }
    void generate(string s, int l, vector<string>& v) {
        if (s.size() == l) {
            if (isvalid(s)) v.push_back(s); 
        } else {
            generate(s + '(', l, v);
            generate(s + ')', l, v);
        }
    }
    bool isvalid(string s) {
        stack<char> stack;
        for(size_t i=0;i<s.size();i++){
            if(s[i]=='(') stack.push(s[i]);
            else{
                if(stack.empty()) return false;
                if(stack.top()=='(' && s[i]!=')') return false;
                stack.pop();
            }
        }
        return stack.empty();
    }
};
