class Solution {
public:
    bool halvesAreAlike(string s) {
        // Brute Force
        int len=s.size();
        int cnt=0,cnt1=0;
        for(int i=0;i<len/2;i++)
        {
            if(s[i]=='a' || s[i]== 'e' || s[i]=='i' || s[i]=='o'|| s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                cnt++;
            }
        }
        for(int i=len/2;i<len;i++)
        {
            if(s[i]=='a' || s[i]== 'e' || s[i]=='i' || s[i]=='o'|| s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                cnt1++;
            }
        }
        return cnt==cnt1;
        
    }
};