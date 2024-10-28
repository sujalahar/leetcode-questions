class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;
         if(root==p) return p;
            if(root==q) return q;
        TreeNode* r = lowestCommonAncestor(root->left,p,q);
            TreeNode* l = lowestCommonAncestor(root->right,p,q);
        if(r==NULL && l==NULL) return NULL;
        else if(r!=NULL && l==NULL) return r;
        else if(r==NULL && l!=NULL) return l;
        else{
            return root;
        }
    }
};