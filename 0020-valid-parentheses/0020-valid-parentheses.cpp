class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(size_t i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{') stack.push(s[i]);
            else{
                if(stack.empty()) return false;
                if(stack.top()=='(' && s[i]!=')') return false;
                if(stack.top()=='[' && s[i]!=']') return false;
                if(stack.top()=='{' && s[i]!='}') return false;
                stack.pop();
            }
        }
        return stack.empty();
    }
};
