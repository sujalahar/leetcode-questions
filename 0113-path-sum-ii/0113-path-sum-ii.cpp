class Solution {
public:
    
    void solve(vector<vector<int>>&ans ,vector<int>path ,TreeNode* root ,int targetSum ,int sum){
        if(root == NULL) return;
        
        sum= sum + root->val;
        path.push_back(root->val);
        if(root->left == NULL && root->right == NULL){
            if(sum==targetSum){
                ans.push_back(path);
            }
            return;
        }
        solve(ans,path,root->left,targetSum,sum);
        solve(ans,path,root->right,targetSum,sum);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>path;
        int sum=0;
        solve(ans,path,root,targetSum,sum);
        return ans;
    }
};