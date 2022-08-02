int Solve(Node* root,int & sum)
{
    if(root == NULL)
    {
        return 0;
    }
    if(root->left && root->left->left == NULL && root->left->right == NULL)
    {
        sum += root->left->data;
    }
    Solve(root->left,sum);
    Solve(root->right,sum);
    
}

int leftLeavesSum(Node *root)
{
    // Code here
    int sum = 0;
    Solve(root,sum);
    return sum;
}
