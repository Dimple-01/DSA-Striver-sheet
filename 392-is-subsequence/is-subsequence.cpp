class Solution {
public:
    bool solver(string &s, string &t, int i, int j, vector<bool>&dp)
    {
        // dp solution
        if(i==0) return true;
        if(j==0 ) return false;
        if(dp[j] !=-false) return true;

        if(s[i-1] == t[j-1])
            dp[j]= solver(s,t,i-1,j-1,dp);
        else
            dp[j]= solver(s,t,i,j-1,dp);
        return dp[j];


    }
    bool isSubsequence(string s, string t) {
    vector<bool> dp(t.size()+1, false);
    return solver(s,t, s.size(), t.size(),dp);
    
    }
};