class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> x;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            x[nums[i]]++;
        }
        vector<int> nw;
        for(int i=0;i<k;i++){
            int ans = 0;
            int maxf = -1;
            for (auto const& j:x) {
                if (j.second > maxf) {
                    maxf = j.second;
                    ans = j.first;
                }
            }

            nw.push_back(ans);
            x.erase(ans);
        }
        return nw;
    }
};