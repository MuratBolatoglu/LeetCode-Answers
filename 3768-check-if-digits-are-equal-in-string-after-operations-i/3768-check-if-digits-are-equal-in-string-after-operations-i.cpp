class Solution {
public:
    bool hasSameDigits(string s) {
        while(1){
            string temp="";
            for(size_t i=0;i<s.size()-1;i++){
                int d1=s[i]-'0', d2=s[i+1]-'0';
                temp+=to_string((d1+d2)%10);
            }
            if (temp.size() == 2) return temp[0] == temp[1];
            s = temp;
        }
    }
};