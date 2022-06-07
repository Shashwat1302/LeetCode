class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();
        int arr[row*col]; 
        vector<vector<int>> ans(r,vector<int>(c));
        if(r*c!=row*col)
        {
            return mat;
        }
        else
        {
            for(int i=0;i<row;i++)
                for(int j=0;j<col;j++)
                    arr[col*i+j]=mat[i][j];
            
            
            for(int i=0;i<c*r;i++)
                if(i>=(i/c)+(i%c))
                    ans[i/c][i%c]=arr[i];
            
            return ans;
        }
        
    }
};