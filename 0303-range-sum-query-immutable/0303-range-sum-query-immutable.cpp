class NumArray {
public:
    NumArray(vector<int>& nums) {
        v=nums;
    }
    
    int sumRange(int left, int right) {
        int count=0;
        for(size_t i =left;i<=right;i++) count +=v[i];
        return count;
    }
    vector<int> v;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */