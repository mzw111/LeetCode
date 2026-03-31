class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=0;
        int n= bloomDay.size();
        if((long long)m*k > n){
            return -1;
        }
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            if(bloomDay[i] > ans){
                ans=bloomDay[i];
            }
        }
        int high= ans;
        while(low<= high){
            int mid= low+(high - low)/2;
            int flower=0;
            int bouquet =0;
            for(int i=0;i <n;i++){
                if(mid>= bloomDay[i]){
                    flower++;
                    if(flower == k){
                        bouquet++;
                        flower=0;
                    }
                }
                else{
                    flower=0;
                }
            }
            if(bouquet>=m){
                ans= min(ans, mid);
                high = mid-1;
            }
            else{
                low= mid+1;
            }
        }
        return ans;
    }
};