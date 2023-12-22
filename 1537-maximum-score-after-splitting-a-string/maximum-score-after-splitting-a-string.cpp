class Solution {
public:
// Brute force approach
    int countzero(string s , int st, int end)
    {
        int cnt=0;
        for(int i=st;i<end;i++)
        {
            if(s[i] == '0')
            cnt++;
        }
        return cnt;
    }
    int countones(string s , int st, int end)
    {
        int cnt=0;
        for(int i=st;i<end;i++)
        {
            if(s[i] == '1')
            cnt++;
        }
        return cnt;
    }
    int maxScore(string s) 
    {
    int maxi=0;
    
    for(int i=1;i<s.size();i++)
    {
        int zeroleft= countzero(s, 0 ,i);
        int rightone= countones(s, i, s.size());
        
        int score= zeroleft+ rightone;
        maxi=max(maxi,score);
    }
    return maxi;
        
    }
};