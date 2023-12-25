class Solution {
public:
    unordered_map<int,int> dp;
    int solver(string s, int i)
    {
        if(s[i] == '0') return 0;
        if(i>= s.size() -1) return 1;
        
        if (dp.find(i) != dp.end()) return dp[i];
        int ans= solver(s,i+1);
        if(stoi(s.substr(i,2))<= 26)
            ans+= solver(s,i+2);
        return dp[i] = ans;
    }
    int numDecodings(string s) {
        return solver(s,0);
        
    }
};