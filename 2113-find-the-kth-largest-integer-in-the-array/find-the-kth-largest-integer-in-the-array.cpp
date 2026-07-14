class Solution {
public://custom heap
    struct comp {
        bool operator()(const string& a, const string& b) {//special cpp func is operator
            if (a.size() != b.size()) {
                return a.size() > b.size();
            }
            return a > b;
        }
    };
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string, vector<string>, comp> pq;
        for (string s : nums) {
            pq.push(s);
            if (pq.size() > k) {
                pq.pop();
            }
        }
        return pq.top();
    }
};

//bool operator 
//priorityqueue