class Solution {
public:
int solver(vector<int> & a, int curr, int prev, vector<vector<int>> & dp)
{
    // Top Down approach dp solution
    if(curr==a.size())
    {
        return 0;
    }
    if(dp[curr][prev+1]!=-1) return dp[curr][prev+1];
    int include=0;
    if(prev== -1 || a[curr] > a[prev])
    {
        include= 1+ solver(a, curr+1, curr,dp);
    }
    int exclude=0;
    exclude=0+ solver(a, curr+1, prev,dp);

    return dp[curr][prev+1]=max(include, exclude);
    
}
    int lengthOfLIS(vector<int>& nums) {
        // recursion
        vector<vector<int>> dp(nums.size(), vector<int>(nums.size()+1,-1));
        return solver(nums,0,-1,dp);
        
    }
};