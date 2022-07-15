class Solution {
   private:
    int m,n;
    public:
    
    
    int solve(int i,int j,vector<vector<int>> &grid)
    {
        
        if(i<0 || i==m || j<0 || j==n || grid[i][j]==0)
            return 0;
      
        grid[i][j] = 0;
       
        int a = solve(i-1,j,grid);
        int b = solve(i,j-1,grid);
        int c = solve(i,j+1,grid);
        int d = solve(i+1,j,grid);
       
        return (1+a+b+c+d);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
    int ans = 0; 
        m = grid.size();
        n = grid[0].size();
        
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                
                int temp = solve(i,j,grid);
                ans = max(ans,temp); 
            }
        }
        return ans;
    }
};