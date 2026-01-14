class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int m=INT_MIN;
        for(int i=arr.size()-1;i>=0;i--){
            int temp=arr[i];
            if(m==INT_MIN) arr[i]=-1;
            else arr[i]=m;
            m=max(temp,m);
        }
        return arr;
    }
};