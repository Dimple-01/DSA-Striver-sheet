class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       
        int n= nums.size();
         vector<int> store;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] != 0)
            {
                store.push_back(nums[i]);
            }
        }
        int store_len=store.size();
        int diff= n - store_len;
        for(int j=0;j<diff;j++)
        {
            store.push_back(0);
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=store[i];
        }
        
    }
};