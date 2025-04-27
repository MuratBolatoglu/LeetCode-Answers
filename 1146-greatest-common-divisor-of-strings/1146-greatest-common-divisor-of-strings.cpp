class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // ekleyerek gitmen lazım erase() olmaz;
        if(str2.size()>str1.size()) str1.swap(str2);
        string curr="",ans="";
        int index=0;
        while(index < str2.size()){
            curr+=str2[index];
            index++;
            if(str2.size()%curr.size() != 0 || str1.size()%curr.size() != 0) continue;
            else if(check(str1,curr) && check(str2,curr)) ans=curr;  
        }
        return ans;
    }
    bool check(string main,string current){
        string s="";
        for(int i=0;i<main.size() / current.size();i++) s+=current;
        return s==main;
    }
};