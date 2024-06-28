void ino(TreeNode* root,vector<int> &v){
        if(root){
            ino(root->left,v);
            v.push_back(root->val);
            ino(root->right,v);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        ino(root,v);
        return v;
    }
