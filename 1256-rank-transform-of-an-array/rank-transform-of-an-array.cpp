class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>x = arr;
        sort(x.begin(), x.end());
        unordered_map<int,int> rank;
        int r = 1;
        for(int i: x){
            if(rank.find(i)==rank.end()){
                rank[i]=r++;
            }
        }
        vector<int> res;
        for(int j: arr){
            res.push_back(rank[j]);
        }
        return res;
    }
};