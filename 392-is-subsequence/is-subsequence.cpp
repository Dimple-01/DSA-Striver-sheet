class Solution {
public:
    bool solver(int i, int j,string s, string t )
    {
        if(i==s.size()) return true;
        if(j==t.size())
        {
            return false;
        }
         if (s[i]== t[j])
            return solver(i+1,j+1,s,t);
        else
        return solver(i, j+1 ,s,t);
        
    }
    bool isSubsequence(string s, string t) {
        // recursion
        return solver(0,0,s,t);
             
    }
};