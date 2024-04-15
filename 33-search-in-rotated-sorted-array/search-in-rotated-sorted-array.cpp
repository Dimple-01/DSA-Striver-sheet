class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,mid;
        while(low<=high)
        {
            mid= low + ( high -low)/2;
            if(nums[mid]==target)
            return mid;

            //Checking left sorted

            if(nums[low]<=nums[mid])
            {
                if(target>=nums[low] && target <=nums[mid])
                    high= mid-1;
                else
                {
                    low=mid+1;
                }
            }
            //checking right sorted
            else
            {
                if(target<=nums[high] && target >=nums[mid])
                {
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }

            
        }
        return -1;
        
    }
};