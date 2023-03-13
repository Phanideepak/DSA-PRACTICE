
/** Printing nodes level by level*/
vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        vector<int> temp;

        while(!q.empty()){
            
             TreeNode* t = q.front();
             q.pop();
             if(t!=NULL){
                temp.push_back(t->val); 
                if(t->left) {
                    q.push(t->left);
                } 
                if(t->right){
                    q.push(t->right);
                }
             } else if(!q.empty()){
                 q.push(NULL);
                 ans.push_back(temp);
                 temp = {};
             }
        }
        ans.push_back(temp);
        return ans;        
}
