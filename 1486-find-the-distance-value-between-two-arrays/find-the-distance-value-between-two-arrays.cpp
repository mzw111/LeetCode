class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int dist = 0;
        int n = arr1.size();
        for (int i = 0; i < n; i++) {
            bool isok = true;
            for (int j = 0; j < arr2.size(); j++) {
                if (abs(arr1[i] - arr2[j]) <= d) {
                    isok = false;
                    break;
                }
            }
            if (isok) {
                dist++;
            }
        }
        return dist;
    }
};