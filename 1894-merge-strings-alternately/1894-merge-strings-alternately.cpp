class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int index1=0,index2=0,size1=word1.size(),size2=word2.size();
        string ans="";
        while(index1<size1 || index2<size2){
            if(index1<size1){
                ans+=word1[index1];
                index1++;
            }
            if(index2<size2){
                ans+=word2[index2];
                index2++;
            }
        }
        return ans;
    }
};