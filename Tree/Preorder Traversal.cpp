void Treversal(Node* root ,vector<int>&v)
{
    if(root == NULL)
    {
        return;
    }
    v.push_back(root->data);
    Treversal(root->left,v);
    Treversal(root->right,v);
}
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int>v;
  Treversal(root,v);
  return v;
  
}
