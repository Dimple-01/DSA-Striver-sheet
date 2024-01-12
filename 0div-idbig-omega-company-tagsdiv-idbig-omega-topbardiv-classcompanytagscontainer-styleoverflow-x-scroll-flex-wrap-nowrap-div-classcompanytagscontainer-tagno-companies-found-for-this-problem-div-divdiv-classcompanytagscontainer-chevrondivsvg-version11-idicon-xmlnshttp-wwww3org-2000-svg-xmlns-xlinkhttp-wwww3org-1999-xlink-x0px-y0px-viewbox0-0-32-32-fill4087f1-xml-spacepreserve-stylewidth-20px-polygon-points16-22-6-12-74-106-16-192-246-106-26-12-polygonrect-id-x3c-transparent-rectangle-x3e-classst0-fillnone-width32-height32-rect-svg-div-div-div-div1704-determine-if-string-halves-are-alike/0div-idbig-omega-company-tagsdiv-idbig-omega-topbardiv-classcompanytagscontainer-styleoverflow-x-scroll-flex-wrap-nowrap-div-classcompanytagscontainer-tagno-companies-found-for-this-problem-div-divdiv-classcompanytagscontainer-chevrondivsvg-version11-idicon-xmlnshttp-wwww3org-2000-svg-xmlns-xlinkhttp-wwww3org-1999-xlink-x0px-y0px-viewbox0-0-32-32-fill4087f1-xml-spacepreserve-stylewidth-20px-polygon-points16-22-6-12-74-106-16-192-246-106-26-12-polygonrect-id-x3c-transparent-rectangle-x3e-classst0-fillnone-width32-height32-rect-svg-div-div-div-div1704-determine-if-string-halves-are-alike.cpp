class Solution {
public:
    bool halvesAreAlike(string s) {
        // Brute Force ----O(n/2)=O(n)
        
        // int len=s.size();
        // int cnt=0,cnt1=0;
        // for(int i=0;i<len/2;i++)
        // {
        //     if(s[i]=='a' || s[i]== 'e' || s[i]=='i' || s[i]=='o'|| s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        //     {
        //         cnt++;
        //     }
        // }
        // for(int i=len/2;i<len;i++)
        // {
        //     if(s[i]=='a' || s[i]== 'e' || s[i]=='i' || s[i]=='o'|| s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        //     {
        //         cnt1++;
        //     }
        // }
        // return cnt==cnt1;
        
        // using set  -----O(n)
        unordered_set<char> vowels={'a', 'e','i','o','u','A','E','I','O','U'};
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(vowels.count(s[i])>0)
            {
                cnt+=(i<s.size()/2)?1:-1;
            }
        }
        
        return cnt==0;
        
    }
};