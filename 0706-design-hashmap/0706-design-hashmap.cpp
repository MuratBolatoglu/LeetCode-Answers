class MyHashMap {
public:
    int m[1000001]={0},n[1000001]={0};
    MyHashMap() {}
    
    void put(int key, int value) {
        m[key]=1;
        n[key]=value;
    }
    
    int get(int key) {
        if(m[key]==0) return -1;
        return n[key];
    }
    
    void remove(int key) {
        m[key]=0;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */