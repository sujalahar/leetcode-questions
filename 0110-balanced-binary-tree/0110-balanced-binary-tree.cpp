
class Solution {
public:
    
    int heightc(TreeNode* root){
        if(root ==NULL) return 0;
        return 1 + max(heightc(root->left),heightc(root->right)); 
    }
    
    
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true;
        } 
        
        if(abs(heightc(root->left)-heightc(root->right))<=1){
            return isBalanced(root->left)  && isBalanced(root->right) ;
        }
        return false;
    }
};