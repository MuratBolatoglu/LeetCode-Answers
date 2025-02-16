class WordDictionary {
public:
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        m[word]=true;
    }
    
    bool search(string pre) {
        if(pre=="") return true;
        unordered_map<string,bool>::iterator it;
        for(it=m.begin();it!=m.end();++it){
            if ((it->first).size() != pre.size()) continue;
            bool match = true;
            for (size_t i = 0; i < pre.size(); i++) {
                if (pre[i] != '.' && pre[i] != (it->first)[i]) {
                    match = false;
                    break;
                }
            }
            if (match) return true;
        }
        return false;
    }
private:
    unordered_map<string,bool> m;
};
