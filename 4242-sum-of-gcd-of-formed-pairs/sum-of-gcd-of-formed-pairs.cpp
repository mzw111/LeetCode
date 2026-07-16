class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<long> pref(n);
        int mx = nums[0];
        for(int i=0;i<n;i++){
            mx = max(mx, nums[i]);
            pref[i] = gcd(nums[i], mx);
        }   
        sort(pref.begin(), pref.end());

        long long total = 0;
        int left = 0;
        int right = n-1;
        while(left < right){
            total+=gcd(pref[left], pref[right]);
            left++;
            right--;
        }
        return total;
    }
};