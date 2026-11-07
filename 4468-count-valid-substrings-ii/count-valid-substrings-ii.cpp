class Solution {
public:
    long long countValidSubstrings(string s) {
         int n = s.size();
        int l = 0;
        int a = -1; 
        int b = -1;
        int c = -1;
        long long ans = 0;
        
        for(int i=0;i<n;i++){
            if(s[i] == 'a'){
                a = i;
            }
            if(s[i] == 'b' && a!= -1){
                b= a;
            }
            if(s[i] == 'c' && b!= -1 ){
                l = max(l,b+1);
            }
            
            ans +=(i-l+1);
        }
        return ans;
    }
};