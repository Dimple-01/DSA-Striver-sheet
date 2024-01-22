class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int l= nums.size();
        unordered_map<int, int> m;
        vector<int> ans;
        
        for(int i=0;i <l;i++)
        {
            m[nums[i]]++;
        }
        for (auto it = m.begin(); it != m.end(); ++it) {
        if (it->second == 2) {
            ans.push_back(it->first);
        }
        }
      
        unordered_set<int> s(nums.begin(),nums.end());
        for(int j=1;j<=l;j++)
        {
            if(s.find(j) == s.end())
            {
                ans.push_back(j);
                break;
            }
        }
        return ans;

    }
};