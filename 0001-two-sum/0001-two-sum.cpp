class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1 ;j<nums.size(); j++){
                if(nums[i]+nums[j] == target){
                    int ans = nums.size();
                    for(int k= 0; k<ans;k++){
                        nums.pop_back();
                    }
                    nums.push_back(i);
                    nums.push_back(j);
                }
            }
        }
    return nums;
        
        
    }
};