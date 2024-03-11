class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums2.begin(),nums2.end());
        int minvalue=INT_MAX;
        for(auto&x: nums1)
        {
            if(s.count(x) > 0)
            {
                minvalue=min(minvalue,x);
            }
        }
        return (minvalue == INT_MAX) ? -1 : minvalue;

    }
};