class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
     

        sort(nums.begin(),nums.end());
 

        for( int n : nums)
        {
            bool visited= false;
            for(vector<int> & row : ans)
            {
                if(n> row.back())
                {
                    row.push_back(n);
                    visited= true;
                    break;
                }
            }
            if(!visited)
                ans.push_back({n});
        }
        return ans;
        
    }
};