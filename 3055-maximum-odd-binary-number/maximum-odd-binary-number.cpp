class Solution {
public:
    // O(n)
    int digitcount(string s)
    {
        int len=s.size();
        int count=0;
        for(int i =0;i<len;i++)
        {
            if(s[i]=='1')
                count++;
        }
        return count;
    }
    string maximumOddBinaryNumber(string s) {
        string str="";
         int len=s.size(),i,j;
         int countone= digitcount(s);
        int countzero= len - countone;
        for(i=0;i<countone-1;i++)
        {
            str+='1';
        }
        for(j=i;j<len-1;j++)
        {
            str+='0';
        }
        str+='1';
        return str;
    }
};