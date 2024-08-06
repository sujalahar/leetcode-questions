class Solution {
public:
    void sortColors(vector<int>& nums) {
    int start , end;
    start = 0;
    end = nums.size()-1;

    int key,k;   
    int i =0; 
   
   while (  i <= end)
   {
        if(nums[i]== 2){
            swap(nums[end],nums[i]);
            end--;
        }
        else{
            swap(nums[i],nums[start]);
            i++;
        }
   }
   
    while (start<=end)
    {
        if (nums[start]==1)
        {
            swap(nums[start],nums[end]);
            end--;    
        }
        else
        {
            start++;
        }
    }    
    }
};