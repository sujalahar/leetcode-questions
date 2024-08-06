class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxsum=INT_MIN;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(sum<0 && nums[i]>sum)
            {
                 sum=0;
            } 
            sum=nums[i]+sum;
            if(maxsum<sum)
            {
                maxsum=sum;
            }
        }
        return maxsum;
    }
};