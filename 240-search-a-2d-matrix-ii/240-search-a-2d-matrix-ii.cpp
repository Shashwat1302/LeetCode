class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int row=0;
        int column=n-1;
        while(row<m && column>=0){
            if(matrix[row][column]==target){
                return true;
            }
            else if(matrix[row][column]<target){
                row++;
            }
            else {
                column--;
            }
        }

        return false;
    }
};