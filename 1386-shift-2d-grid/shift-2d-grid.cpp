class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        int t = m*n;
        vector<int> x;
        for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                x.push_back(grid[i][j]);
            }
        }
        k=k%t;
        vector<int> newnew(t);
        for(int i = 0;i<t;i++){
            newnew[(i+k)%t]= x[i];
        }
        vector<vector<int>> pewpew(n, vector<int>(m));
        int in=0;
        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                pewpew[i][j]=newnew[in++];
            }
        }
        return pewpew;

    }
};