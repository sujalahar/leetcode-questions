class Solution {
public: 
    void h(TreeNode* root , int path , int &minpath){
        if(root == NULL ) return;
        if(root->left==NULL && root->right==NULL){
            path+=1;
            minpath = min(path,minpath);
            return;
        }
        path+=1;
        h(root->left,path,minpath);
        h(root->right,path,minpath);
    }
    
    int minDepth(TreeNode* root) {
        int minpath = INT_MAX;
        h(root,0,minpath);
        if(minpath==INT_MAX) return 0;
        return minpath;
    }
};