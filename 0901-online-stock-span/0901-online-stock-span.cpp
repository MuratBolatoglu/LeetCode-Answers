class StockSpanner {
public:
    vector<int> v;
    StockSpanner() {}    
    int next(int price) {
        v.push_back(price);
        if(v.size()==1) return 1;
            
        int count=1;
        for(int i=v.size()-2;i>=0;i--){
            if(price<v[i]) return count;
            count++;
        }
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */