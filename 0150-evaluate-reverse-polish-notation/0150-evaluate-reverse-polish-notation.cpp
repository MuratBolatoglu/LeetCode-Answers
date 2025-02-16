class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(size_t i=0;i<tokens.size();i++){
            if(tokens[i].size()==1 && (tokens[i][0]=='+' ||tokens[i][0]=='-' ||tokens[i][0]=='/' ||tokens[i][0]=='*')){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                if(tokens[i][0]=='+') s.push(a+b);
                if(tokens[i][0]=='-') s.push(b-a);
                if(tokens[i][0]=='*') s.push(a*b);
                if(tokens[i][0]=='/') s.push(b/a);
            }else{
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};
