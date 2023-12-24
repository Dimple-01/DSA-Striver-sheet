class Solution {
public:
    int minOperations(string s) {
        int cnt=0,i,j;
        int l= s.size();
      
            for( i=0;i<l;i+=2)
            {
                if(s[i] == '0')
                {
                    cnt++;
                }
            }
             for( i=1;i<l;i+=2)
            {
                if(s[i] == '1')
                {
                    cnt++;
                }
            }
        
         
        return min(cnt,l-cnt);
        
    }
};