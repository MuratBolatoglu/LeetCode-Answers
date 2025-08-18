class LRUCache {
public:
    LRUCache(int capacity) { s=capacity;}
    
    int get(int key) {
        if(m.find(key)==m.end())return -1;
        tmap[key]=time;
        time++;
        return m[key];
    }
    
    void put(int key, int value) {
        m[key]=value;
        tmap[key]=time;
        time++;
        if(m.size()>s){
            int min=INT_MAX,remove;
            for(auto& i : tmap){
                if(i.second < min){
                    min=i.second;
                    remove=i.first;
                }
            }
            m.erase(remove);
            tmap.erase(remove);
        }
    }
    int s,time=0;
    unordered_map<int,int> m,tmap;
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */