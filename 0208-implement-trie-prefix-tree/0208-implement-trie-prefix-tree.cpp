class Trie {
public:
    Trie() {
        
    }
    
    void insert(string word) {
       m[word]=true; 
    }
    
    bool search(string word) {
        return (m.find(word)!=m.end());
    }
    
    bool startsWith(string pre) {
        if(pre=="") return true;
        unordered_map<string,bool>::iterator it;
        for(it=m.begin();it!=m.end();++it){
            for(size_t i=0;i<pre.size();i++){
                if(i==pre.size()-1 && pre[i]==(it->first)[i]) return true;
                if(pre[i]!= (it->first)[i]) break;
            }
        }
        return false;
    }
private:
    unordered_map<string,bool> m;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */