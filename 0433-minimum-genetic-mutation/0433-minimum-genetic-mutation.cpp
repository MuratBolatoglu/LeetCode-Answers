class Solution {
public:
    int minMutation(string begin, string end, vector<string>& words) {
        set<string> visited;
        queue< pair<string,int> > q;
        q.push({begin,0});
        visited.insert(begin);
        while(!q.empty()){
            string current= q.front().first;
            int depth=q.front().second;
            q.pop();
            for(size_t i=0;i<words.size();i++){
                if(difference(current,words[i])==1 && visited.find(words[i])==visited.end()){
                    visited.insert(words[i]);
                    q.push({words[i],depth+1});
                }
            }
            if(current==end) return depth;
        }
        return -1;
    }
    int difference(string main,string test){
        int count=0;
        for(size_t i=0;i<main.size();i++){
            if(main[i] != test[i]) count++; 
        }
        return count;
    }

};