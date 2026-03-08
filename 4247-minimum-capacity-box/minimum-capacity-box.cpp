class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int s = capacity.size();
        int low = INT_MAX;
        int index = -1;
        for (int i = 0; i < s; i++) {
            if (capacity[i] >= itemSize) {
                int less = capacity[i] - itemSize;
                if (less < low) {
                    low = less;
                    index=i;
                }
               
            }
            
        }
        return index;
    }
};