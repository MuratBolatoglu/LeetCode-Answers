class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int index1=0,index2=0;
        string ans="";
        while(index1<word1.size() && index2<word2.size()){
            ans+=word1[index1];
            ans+=word2[index2];
            index1++;
            index2++;
        }
        while(index1<word1.size()){
            ans+=word1[index1];
            index1++;
        }
        while(index2<word2.size()){
            ans+=word2[index2];
            index2++;  
        }
        return ans;
    }
};