class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> mp;
       vector<vector<string>> ans;
       int l = strs.size();
       for(auto &x : strs)
       {
           string sortedx = x;
           sort(sortedx.begin(), sortedx.end());
           mp[sortedx].push_back(x);

       }

       for(auto & y: mp)
       {
           ans.push_back(y.second);
       }
       return ans;

        
        
    }
};