class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> ans,ans1;
        vector<int> res;
        for(auto & x: nums1)
        {
            ans.insert(x);
        }
        for(auto & y:nums2)
        {
             ans1.insert(y);
        }
        for(auto & z: ans)
        {
            if(ans1.count(z) > 0)
            {
                res.push_back(z);
            }
        }
        return res;
    }
};