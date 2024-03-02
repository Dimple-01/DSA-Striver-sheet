class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //TC = O(n)
        //sc= O(n)
        int st=0,end=nums.size()-1;
        int k= nums.size()-1;
        vector<int> result(k+1);
        while(st<=end)
        {
            int left_sq_ele= nums[st] * nums[st];
            int right_sq_ele= nums[end] * nums[end];
            if(left_sq_ele > right_sq_ele)
            {
                result[k--]= left_sq_ele;
                st++;
            }
            else
            {
                result[k--] = right_sq_ele;
                end--;
            }
        }

        return result;
    }
};