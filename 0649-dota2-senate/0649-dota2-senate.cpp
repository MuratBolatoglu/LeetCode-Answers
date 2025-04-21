class Solution {
public:
    string predictPartyVictory(string senate) {
        int n=senate.size();
        queue<int> dir,rad;
        for(size_t i=0;i<n;i++){
            if(senate[i]=='R') rad.push(i);
            else dir.push(i);
        }
        while(!dir.empty() && !rad.empty()){
            if(rad.front() < dir.front()){
                dir.pop();
                rad.push(rad.front()+n);
                rad.pop();
            }else{
                rad.pop();
                dir.push(dir.front()+n);
                dir.pop();
            }
        }
        return rad.empty() ? "Dire" : "Radiant";
    }
};