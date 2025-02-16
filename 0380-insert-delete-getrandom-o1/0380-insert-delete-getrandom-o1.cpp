class RandomizedSet {
public:
    set<int> s;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        bool ret=s.find(val)==s.end();
        s.insert(val);
        return ret;
    }
    
    bool remove(int val) {
        bool ret=s.find(val)!=s.end();
        s.erase(val);
        return ret;
    }
    
    int getRandom() {
        set<int>::iterator it=s.begin();
        int random = rand() % s.size();
        for(int i=0;i<random;i++){
            it++;
        }
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */