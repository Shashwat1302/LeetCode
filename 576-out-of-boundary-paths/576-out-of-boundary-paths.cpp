class Solution {
public:
    int add[2][4]={{0,0,-1,1},{1,-1,0,0}};
    int mod=1000000007;
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        if(maxMove==0) return 0;
        long long dp[m][n][maxMove+1];
        int ii,jj;
        for(int move=1;move<=maxMove;move++) 
        {
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    dp[i][j][move]=0;
                    for(int k=0;k<4;k++)
                    {
                        ii=i+add[0][k];
                        jj=j+add[1][k];
                        
                        if(move==1) 
                        { 
                            if(!(ii>=0 && ii<m && jj>=0 && jj<n)) 
                                dp[i][j][move]++;
                        }
                        else
                        {
                            if(ii>=0 && ii<m && jj>=0 && jj<n)
                            {
                                dp[i][j][move]+=dp[ii][jj][move-1];
                                dp[i][j][move]%=mod;
                            }
                        }
                    }
                }
            }
        }
        int ans=0;
        for(int move=1;move<=maxMove;move++)
        {
            ans+=dp[startRow][startColumn][move];
            ans%=mod;
        }
        return ans;
    }
};