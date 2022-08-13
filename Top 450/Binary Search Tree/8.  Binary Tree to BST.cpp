class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void Solve_inorder(Node* root,vector<int>&v)
    {
        if(root == NULL)
        {
            return;
        }
        Solve_inorder(root->left,v);
        Solve_inorder(root->right,v);
        v.push_back(root->data);
    }
    void BST(Node* root, vector<int>v,int &i)
    {
        if(root == NULL)
        {
            return;
        }
        BST(root->left,v,i);
        root->data = v[i];
        i++;
        BST(root->right,v,i);
    }
    
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int>v;
        Solve_inorder(root,v);
        sort(v.begin(),v.end());
        int i=0;
        BST(root,v,i);
        return root;
        
    }
};
