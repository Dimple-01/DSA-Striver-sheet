class Solution {
public:
// Brute Force
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long long int val=1;
        ans.push_back(val);

        for(int i=1;i<rowIndex+1;i++)
        {
            val= val * ((rowIndex+1) - i);
            val = val/(i);
            ans.push_back(val);
        }

        return ans;
        
    }
};