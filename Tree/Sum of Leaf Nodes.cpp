void preorder(Node* root, int & sum)
{
    if(root == NULL)
    {
        return;
    }
    if(root->left == NULL && root->right == NULL)
     {
         sum += root->data;
     }
     preorder(root->left,sum);
     preorder(root->right,sum);
    
    

}
int sumLeaf(Node* root)
{
    // Code here
    int sum = 0;
    preorder(root,sum);
    return sum;
}
