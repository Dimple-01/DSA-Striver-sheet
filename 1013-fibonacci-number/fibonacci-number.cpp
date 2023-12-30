class Solution {
public:
    // DP solution ------------ top- down approach (memoization)
int solver(int i, vector<int> & dp)
        {
            if(i==0 || i==1)
            return i;
            if(dp[i] !=-1) return dp[i];

            dp[i]= solver(i-1, dp) + solver(i-2, dp);
            return dp[i];
        }
    int fib(int n) {
               vector<int> dp(n+1 ,-1);
        return solver(n, dp);

    }
};
        // brute force--------------
        // int f1=0,i,f2=1,fibo=0;
        // if(n==0)
        //     return 0;
        // else if(n==1)
        //     return 1;
        // for(i=0;i<n;i++)
        // {
        //     f1=f2;
        //     f2=fibo;
        //     fibo=f1+f2;
        // }
        // return fibo;

        // recursive solution------------------
        // if(n==0 || n==1)
        // return n;
        // return fib(n-1) + fib(n-2);

        
        
 