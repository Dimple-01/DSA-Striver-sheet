class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>se;
        for(auto & values : nums) 
        {
            se.insert(values);
          
        }
        int j=0;
        for(auto i= se.begin();i!=se.end();++i)
        {
            nums[j++]= *i;
        }
        return se.size();
    }
};