void preorder(Node*root, int&sum)
{
    if(root == NULL)
    {
        return;
    }
    sum += root->key;
    preorder(root->left,sum);
    preorder(root->right,sum);
}

long int sumBT(Node* root)
{
    // Code here
    int sum = 0;
    preorder(root,sum);
    return sum;
    
}
