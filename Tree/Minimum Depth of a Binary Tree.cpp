class Solution{
  public:
    /*You are required to complete this method*/
    void Find_Min(Node* root,int depth, int & ans)
    {
         depth += 1;
        if(root == NULL)
        {
            return;
        }
        if(root->left == NULL && root->right == NULL)
        {
            ans = min(ans,depth);
            return;
        }
        Find_Min(root->left,depth,ans);
        Find_Min(root->right,depth,ans);
    }
    int minDepth(Node *root) {
        // Your code here
        int ans = INT_MAX;
        Find_Min(root,0,ans);
        return ans;
    }
};
