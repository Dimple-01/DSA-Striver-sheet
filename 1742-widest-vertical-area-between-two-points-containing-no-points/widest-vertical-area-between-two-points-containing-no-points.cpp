class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> v;
        int max=0;
        for(int i=0;i<points.size();i++)
        {
            v.push_back(points[i][0]);
        }
        sort(v.begin(),v.end());
        for(int j=1;j<v.size();j++)
        {
            if(abs(v[j] - v[j-1])> max)
            max= abs(v[j] - v[j-1]);
        }
        return max;
    }
};