class Solution {
public:
    int minSteps(string s, string t) {
        // Mapping
        unordered_map<char,int>m1;
        int ans=0;
        for(auto& x: s)
            m1[x]++;
        for(auto& y : t)
            m1[y]--;
        for(auto& a : m1)
            ans+=abs(a.second);
        return ans/2;
        
    }
};