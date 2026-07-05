class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> evens;
        vector<int> odds;
        for (int num : nums) {
            if (num % 2 == 0) {
                evens.push_back(num);
            } else {
                odds.push_back(num);
            }
        }
        for (int num : odds) {
            evens.push_back(num);
        }
        
        return evens;
    }
};