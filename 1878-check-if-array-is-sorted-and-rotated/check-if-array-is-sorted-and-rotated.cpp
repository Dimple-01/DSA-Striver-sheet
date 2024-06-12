class Solution {
public:
    bool check(vector<int>& nums) {
        
        vector<int> sorted(nums);
        sort(sorted.begin(),sorted.end());

        if(nums == sorted) return true;

        int n= nums.size();
        int x=1;
        while(x!=n)
        {
            vector<int> dummy(n);
            for(int i=0;i<n;i++)
            {
                dummy[i]=nums[(i+x)%n];
            }
        x++;
        if(dummy == sorted)
            return true;
        }
        return false;
    }
    
};