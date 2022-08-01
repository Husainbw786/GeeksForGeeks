class Solution{
  public:
    // Function should return all the ancestor of the target node
    int solve(Node* root,int target,vector<int>&v)
    {
        if(root == NULL)
        {
            return 0;
        }
        if(root->data == target)
        {
            return 1;
        }
        int x = solve(root->left,target,v);
        if(x == 1)
        {
            v.push_back(root->data);
            return 1;
        }
        int y = solve(root->right,target,v);
        
        if(y==1)
        {
             v.push_back(root->data);
            return 1;
        }
        if(x == 0 && y == 0)
        {
            return 0;
        }
    }
    vector<int> Ancestors(struct Node *root, int target)
    {
         // Code here
         vector<int>v;
         solve(root,target,v);
         return v;
         
    }
};
