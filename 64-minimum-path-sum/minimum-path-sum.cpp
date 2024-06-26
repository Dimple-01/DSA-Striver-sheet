class Solution {
public:
// this is top down approach- memoization
    int solver(vector<vector<int>>& grid,vector<vector<int>>& dp,int i,int j)
    {
        if(i==0 && j==0 ) return grid[i][j];
       if(i<0 || j<0) return 1000000; 
       if(dp[i][j] != -1) return dp[i][j];   // step 3

       int up= grid[i][j] + solver(grid,dp,i-1,j); 
       int left= grid[i][j] + solver(grid,dp,i,j-1); 
       return dp[i][j]= min(up,left);  // step 2
    }
    int minPathSum(vector<vector<int>>& grid) {
      int n= grid.size();
      int m= grid[0].size();
      vector<vector<int>>dp(n,vector<int>(m,-1)); // step 1
      return solver(grid,dp,n-1,m-1);

    }
};