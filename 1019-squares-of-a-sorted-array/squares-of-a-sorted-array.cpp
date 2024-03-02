class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       for(auto &n :nums)
       {
           n=abs(n) * abs(n);
       } 
       sort(nums.begin(),nums.end());
       return nums;
    }
};