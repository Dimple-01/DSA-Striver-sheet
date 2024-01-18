class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
       int sum =0,j;
        for(int i=0;i<prices.size();i++)
        {
            for( j=i+1;j<prices.size();j++)
            {
                if(prices[j] <= prices[i])
                {
                    ans.push_back(prices[i] - prices[j]);
                    break;
                }
               
            }
            if( j == prices.size())
                ans.push_back(prices[i]);
             
        }
        return ans;
        
    }
};