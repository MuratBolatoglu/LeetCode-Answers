class FreqStack {
public:
    map<int,int> freqMap;
    map<int,stack<int> > setMap;
    int maxfreq = 0;
    FreqStack() {}
    void push(int val) {
        freqMap[val]++;
        if(freqMap[val] > maxfreq) maxfreq = freqMap[val];
        setMap[freqMap[val]].push(val);
    }
    int pop() {
        int top = setMap[maxfreq].top();
        setMap[maxfreq].pop();
        --freqMap[top];
        if(setMap[maxfreq].size() == 0) --maxfreq;
        return top;
    }
};