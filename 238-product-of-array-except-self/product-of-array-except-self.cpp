class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n= nums.size();
       vector<int> p(n,1);
       vector<int> s(n,1);
       vector<int> ans(n);
       for(int i=1;i<n;i++)
       {
            p[i]= p[i-1]* nums[i-1];
       }
       for(int j=n-2;j>=0;j--)
       {
            s[j]=s[j+1]*nums[j+1];
       }
       for(int i=0;i<n;i++)
       {
        ans[i]=p[i] * s[i];
       }
       return ans;
    }
};