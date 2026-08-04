class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int n = weight.size();
        int count = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < weight.size(); i++) {
           
            maxi = max(maxi, weight[i]);
            if (weight[i] < maxi) {
                count++;
                maxi = INT_MIN;
            }
        }
        return count;
    }
};