class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
            m[arr[i]]++;
        vector<int>v;
        for(auto & x: m)
        v.push_back(x.second);

        sort(v.begin(),v.end());   
        for(int i=1;i<v.size();i++)
        {
            if(v[i]== v[i-1])
                return false;
        }
        return true;
        
        
        
        
    }
};