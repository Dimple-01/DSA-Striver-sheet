class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zerocount=count(nums.begin(),nums.end(),0);
        nums.erase(remove(nums.begin(),nums.end(),0),nums.end());
        for(int i=0;i<zerocount;i++)
        {
            nums.push_back(0);
        }
    }
};