class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
         int ele_sum=0;
        for(int i=0;i<nums.size();i++)
           ele_sum+=nums[i];
        
        int digit_sum=0;
        string str="";
        for(int j=0;j<nums.size();j++)
        {
             str = to_string(nums[j]);
            for(int k=0;k<str.size();k++)
            {
                digit_sum+=str[k]-'0';
                
            }
            
        }
        return abs(ele_sum - digit_sum);
         
        
        
    }
};