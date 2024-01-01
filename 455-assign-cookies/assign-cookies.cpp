class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i=0,j=0;
        int cnt=0;
        int l1=g.size();
        int l2= s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while( i!=l1 && j!=l2 )
        {
            if(s[j] >= g[i] )
            {
                cnt++;
                i++;
                j++;
            }
            else
            j++;
            
        }
        return cnt;
    }
};