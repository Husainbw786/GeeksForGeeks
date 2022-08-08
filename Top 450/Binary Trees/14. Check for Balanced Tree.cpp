class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
     bool flag = true;
    int Solve(Node* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        int x = Solve(root->left);
        int y = Solve(root->right);
        if(abs(x-y) > 1)
        {
            flag = false;
        }
        return 1 + max(x,y);
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
      
        Solve(root);
        return flag;
    }
};
