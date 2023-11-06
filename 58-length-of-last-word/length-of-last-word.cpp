class Solution {
public:
    int lengthOfLastWord(string s) {
        int i,j,len=0,l=s.size();
        string str="";
        for(i=0;i<l;i++)
        {
            
            if (s[i]==' ')
            {
                str="";
            }
            else
            {
                str+=s[i];
                len=str.size();
            }
        }
        return len;
    }
};