class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        long long sum = 0;
        //sum
        for (auto& row : grid) {
            for (int val : row) {
                sum += val;
            }
        }
        //top
        long long topsum =0;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m;j++){
                topsum+=grid[i][j];
            }

            if(topsum ==sum -topsum ){
                return true;
            }
        }
        //left
        long long leftsum=0;
        for(int i=0;i<m-1;i++){
            for(int j=0;j<n;j++){
                leftsum+=grid[j][i];
            }
            if(leftsum==sum-leftsum){
                return true;
            }
        }
        return false;
    }
};