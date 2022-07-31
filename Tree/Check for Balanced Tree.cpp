class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int flag = true;
    int Find(Node* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        int x = Find(root->left);
        int y = Find(root->right);
        if(abs(x-y) > 1)
        {
            flag = false;
        }
        return 1+max(x,y);
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        Find(root);
        return flag;
    }
    
};
