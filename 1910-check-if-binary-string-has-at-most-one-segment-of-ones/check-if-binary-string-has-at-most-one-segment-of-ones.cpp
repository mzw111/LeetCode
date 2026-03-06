class Solution {
public:
    bool checkOnesSegment(string s) {
        int len= s.length();
        for(int i=1 ;i<len; i++){
            if(s[i-1] < s[i]){
                return false;
            }
        }
        return true;
    }
};