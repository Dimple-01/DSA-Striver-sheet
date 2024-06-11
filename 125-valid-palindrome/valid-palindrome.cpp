class Solution {
public:
    bool isPalindrome(string s) {
       
        vector<char>v;

        for(int i=0;i<s.size();i++)
        {
            if((s[i] >='a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
            {
                v.push_back(s[i]);
            }
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                v.push_back(s[i]+ 32);
            }
            
        }
        // for(int i=0,j=v.size()-1;i<v.size(),j>=0;i++,j--)
        // {
        //     if(v[i] != v[j])
        //         return false;
        // }
        int len=v.size();
        for(int i=0;i<len/2;i++)
        {
            if(v[i] != v[len-i-1])
                return false;
        }
        return true;
        
        
    }
};