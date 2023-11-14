class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l= digits.size();
        reverse(digits.begin(),digits.end());
        int s=0;
        s= digits[0]+1;
        int carry= s/10;
        digits[0]=s%10;
        int i=1;
        while(i<l && carry!=0)
        {
            s=digits[i]+1;
            carry= s/10;
            digits[i]= s%10;
            i++;

        }
        if(carry!=0)
        {
            digits.push_back(carry);
        }
          reverse(digits.begin(),digits.end());
          return digits;
       

}
};