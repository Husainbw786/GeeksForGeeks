class Solution{
  public:
    /*You are required to complete below method */
    
    int Solve(Node* root,int k ,vector<int>&ans)
    {
        if(root == NULL)
        {
            return 0;
        }
        if(root->left == NULL && root->right == NULL)
        {
            return 1;
        }
        int l = Solve(root->left,k,ans);
        int r = Solve(root->right,k,ans);
        if(l+r == k)
        {
            ans.push_back(root->data);
        }
            return l+r;
        
    }
    
    vector<int> btWithKleaves(Node *root, int k)
    { 
        //your code here.
        vector<int>ans;
        if(root == NULL)
        {
            return {-1};
        }
        Solve(root,k,ans);
        if(ans.size() == 0)
        {
            return {-1};
        }
        return ans;
    }

};
