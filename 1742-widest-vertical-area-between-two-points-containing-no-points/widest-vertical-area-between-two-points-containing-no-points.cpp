class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        set<int> v;
        int max_width=0;
        for(auto it : points)
        {
            v.insert(it[0]);
        }
       
       auto i= v.begin();
       while(i != v.end())
       {
           int curr= *i;
           ++i;
           if(i!=v.end())
           {
               int nxt= * i;
               max_width= max(max_width, nxt - curr);
           }
       }
        return max_width;
    }
};