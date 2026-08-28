class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage,
                                int k) {
        int n = quality.size();
        vector<pair<double, int>> x;
        for (int i = 0; i < n; i++) {
            double ratio = double(wage[i]) / quality[i];
            x.push_back({ratio, quality[i]});
        }
        sort(x.begin(), x.end());
        priority_queue<int> pq;
        long long qsum = 0;
        double ans = DBL_MAX;
        for (auto& [ratio, q] :x) {
            pq.push(q);
            qsum = qsum + q;
            if (pq.size() > k) {
                qsum = qsum - pq.top();
                pq.pop();
            }
            if (pq.size() == k) {
                ans = min(ans, ratio * qsum);
            }
        }
        return ans;
    }
};