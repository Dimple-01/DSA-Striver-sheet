class Solution {
public:
    int fib(int n) {
        // brute force
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

        // recursive solution
        if(n==0 || n==1)
        return n;
        return fib(n-1) + fib(n-2);

    }
};