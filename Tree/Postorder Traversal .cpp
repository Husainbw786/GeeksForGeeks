void traversal(Node* root,vector<int>&v)
{
    if(root == NULL)
    {
        return;
    }
    traversal(root->left,v);
    traversal(root->right,v);
    v.push_back(root->data);
}

vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int>v;
  traversal(root,v);
  return v;
}
