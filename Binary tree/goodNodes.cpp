void dfs(TreeNode* root,int currmax,int &res){
        if(root==NULL){
            return;
        }
        if(root->val>=currmax){
            res++;
        }
        dfs(root->left,max(currmax,root->val),res);
        dfs(root->right,max(currmax,root->val),res);
    }
    int goodNodes(TreeNode* root) {
        int res=0;
        dfs(root,root->val,res);
        return res;
    }
