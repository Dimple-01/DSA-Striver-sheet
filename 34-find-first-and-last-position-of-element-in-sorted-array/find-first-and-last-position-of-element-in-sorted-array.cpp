class Solution {
public:
int firstOccurence(vector<int>& nums, int target)
    {
        int st=0,end=nums.size()-1;
        int mid;
        int ans=-1;
        while(st<=end)
        {
            mid= st + (end-st)/2;    // protection of int overflow situtation
            if(nums[mid]==target)
            {
                ans= mid;
                end=mid-1;
            }
            else if(nums[mid]<target)
            {
                st= mid+1;
            }
            else{
                end=mid-1;
            }
           

        }
        return ans;
    }

int lastOccurence(vector<int>& nums, int target)
    {
        int st=0,end=nums.size()-1;
        int mid;
        int ans=-1;
        while(st<=end)
        {
            mid= st + (end-st)/2;    // protection of int overflow situtation
            if(nums[mid]==target)
            {
                ans= mid;
                st=mid+1;
            }
            else if(nums[mid]<target)
            {
                st= mid+1;
            }
            else{
                end= mid-1;
            }
           

        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        // if(nums.empty()){
        //     res.push_back(-1);
        //     res.push_back(-1);
            
        // }
        // else
        
            res.push_back(firstOccurence(nums,target));
            res.push_back(lastOccurence(nums,target));
        
        return res;
       
      
    }
};