class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sum=0;
        int max_frequency=0;
        for(auto & x : nums)
        {
            mp[x]++;
            max_frequency= max(max_frequency,mp[x]);
            
        }
       
        for(auto & y: mp)
        {
            if(max_frequency == y.second)
                sum+= y.second;
        }
        
            return sum;
       
    }
};