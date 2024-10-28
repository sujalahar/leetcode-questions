/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sum = 0;
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return false;
        
        targetSum-=root->val;
        
        if(root->left == NULL && root->right == NULL){
            if(targetSum==0){
                return true;
            }
            else return false;
        }
        
        bool r = hasPathSum(root->left,targetSum-sum);
        bool l = hasPathSum(root->right,targetSum-sum);
        
        return r || l;
    }
};