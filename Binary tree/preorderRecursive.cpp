void pre(TreeNode* root,vector<int> &v){
        if(root){
            v.push_back(root->val);
            pre(root->left,v);            
            pre(root->right,v);
        }
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
            vector<int> v;
            pre(root,v)  ;
            return v;
    }
