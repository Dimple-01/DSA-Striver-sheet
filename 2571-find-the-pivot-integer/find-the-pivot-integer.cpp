class Solution {
public:
    int pivotInteger(int n) {
        int tot_sum=0;
        int i;
        for(i=1;i<=n;i++)
        {
            tot_sum+=i;
        }
        int sum=0;
        for( i=1;i<n;i++)
        {
            sum+=i;
            if(sum > tot_sum/2)
            {
                sum-=i;
                break;
            }
        }
        int s=0;
        for(int k=i+1;k<=n;k++)
        {
            s+=k;
        }
        if( s == sum )
        {
            return i;
        }
        return -1;
        
    }
};