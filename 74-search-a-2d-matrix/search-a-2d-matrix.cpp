class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n= matrix.size();
        int m= matrix[0].size();
        int low= 0;
        int high= n*m -1;
        while(low<= high){
            int mid= low+ (high-low)/2;
            int row= mid/m;
            int col = mid%m;
            int value = matrix[row][col];
            if(value==target){
                return true;
            }
            if(value < target){
                low= mid+1;
            }
            else{
                high = mid-1;
            }

        }
        return false;
            }
};