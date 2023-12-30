class Solution {
public:
     // DP solution
     int solver(int i, vector<int> & dp)
     {
         if(i==0 || i==1) return 1;
         
         if(dp[i] !=-1) return dp[i];

         dp[i-1] = solver(i-1,dp);
         dp[i-2] = solver(i-2,dp);

         return dp[i-1]+ dp[i-2];
     }
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return solver(n,dp);
 
        
    }
};
        // recursion
        // if(n==0 || n==1) return 1;  // if we r at 0th stair this means we have reached, also if we r at 1th stair there is only one way i.e jump 1 step.

        // if(n==2) return 2; // if we r at 2nd stair then we can jump 1+ 1 steps or we can jump directly 2steps to reach )th stair.

        // int way1= climbStairs(n-1);
        // int way2= climbStairs(n-2);
        // return way1+ way2;