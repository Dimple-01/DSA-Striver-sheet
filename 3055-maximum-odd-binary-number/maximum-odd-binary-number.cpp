class Solution {
public:
   
    string maximumOddBinaryNumber(string s) {
       
        int len= s.size();
        sort(s.begin(),s.end());
        s.pop_back();
        reverse(s.begin(),s.end());
        s+='1';
        return s;

        
    }
};