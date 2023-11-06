class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
       
        vector <int> ans;
        int i,j,n=nums.size();

        for(int i=0;i<n;i++)
        {
            set<int> set1,set2; // In each iteration set value of set1 and set2 as zero.
            for(int j=i+1;j<n;j++)
                set1.insert(nums[j]);

                int r= set1.size();

            for(int j=0;j<=i;j++)
                set2.insert(nums[j]);

                int left= set2.size();

            ans.push_back(left-r);
        }
        return ans;   
    }
};