class Solution {
public:
    int maxArea(vector<int>& height) {
    int maxvol=INT_MIN;
    int left =0;
    int right = height.size()-1;
    while(left<=right)
    {
        int max=min(height[left],height[right])*(right-left);
        
        if(height[left]>height[right])
                {
                    right--;
                }
        else if(height[left]<=height[right])
        {
            left++;
        }
        if(maxvol<max)
        {
            maxvol=max;
        }
    }
        return maxvol;
    }
};