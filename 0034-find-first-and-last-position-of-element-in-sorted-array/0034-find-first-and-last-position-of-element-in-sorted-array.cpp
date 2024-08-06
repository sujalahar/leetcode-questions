class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0;
        int s1=0;
        int first=-1;
        int last=-1;
        int e=nums.size()-1;
        int e1=nums.size()-1;
        int mid=s+(e-s)/2;
        int mid1=s1+(e1-s1)/2;
        while(s<=e)
        {
            if(nums[mid]==target)
            {
                first=mid;
                e=mid-1;                
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        while(s1<=e1)
        {
            if(nums[mid1]==target)
            {
                last=mid1;
                s1=mid1+1;
            }
            else if(nums[mid1]>target)
            {
                e1=mid1-1;
            }
            else
            {
                s1=mid1+1;
            }
            mid1=s1+(e1-s1)/2;
        }
        vector<int>arr={first,last};
        return arr;        
    }
};