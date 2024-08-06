class Solution {
public:
    void solve(int index,vector<int>& nums,vector<vector<int>>& ans){
        if(index>=nums.size())
        ans.push_back(nums);
        for(int j = index;j<nums.size();j++)
        {
            swap(nums[index],nums[j]);
            solve(index+1,nums,ans);
            swap(nums[index],nums[j]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
    int index =0;
    
    vector<vector<int>>ans;
    solve(index,nums,ans);
    return ans; 
    }
};