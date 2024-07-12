TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*> q;
        if(root==NULL) return NULL;
        q.push(root);
        while(!q.empty()){
            TreeNode* t=q.front();
            q.pop();
            swap(t->left,t->right);
            if(t->left!=NULL) q.push(t->left);
            if(t->right!=NULL) q.push(t->right);
        }
        return root;
    }
