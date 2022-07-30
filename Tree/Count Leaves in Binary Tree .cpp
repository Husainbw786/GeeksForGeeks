void traversal(Node* root , int & count)
{
    if(root == NULL)
    {
        return;
    }
    traversal(root->left,count);
    if(root->left == NULL && root->right == NULL)
    {
        count++;
    }
    traversal(root->right,count);
}
   
int countLeaves(Node* root)
{
  // Your code here
  int count = 0;
  traversal(root,count);
  return count;
}
