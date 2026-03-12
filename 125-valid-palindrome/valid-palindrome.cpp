class Solution {
public:
    bool isPalindrome(string s) {
        string res ="";
        
        int n=s.size();
        for(int i=0;i<n; i++){
            if(isalnum(s[i])){
                res+=tolower(s[i]);
            }
        }
        int x= res.size();
        int i=0;
        int j= x-1;
        while(i<j){
            if(res[i] == res[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};