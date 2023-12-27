class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0;int i;
        int mini=INT_MAX;
        for(i=1;i<=colors.size();i++)
        {
            if(colors[i] == colors[i-1])
            {
               
                if(neededTime[i-1] < neededTime[i])
                {
                     ans+= neededTime[i-1];
                }
                else
                {
                     ans+= neededTime[i];
                }
                if(neededTime[i-1]> neededTime[i])
                    swap(neededTime[i-1],neededTime[i]);
            }
            ans=min(ans, mini);
        }
        return ans;
        
    }
};