class Solution {
public:
    int lengthOfLastWord(string s) {
        int end_index=-1, start_index;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i] !=  ' '){
                 end_index=i;
                 break;
            } 
        } 
        for(int i=end_index;i>=0;i--){
            if(s[i]==' '){
                start_index=i;
                break;
            }
        }
        cout<<start_index<<" "<<end_index;
        return end_index - start_index;
    }
};