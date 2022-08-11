 void Solve(Node* root, int & ans)
  {
      if(root == NULL)
      {
          return;
      }
      Solve(root->right,ans);
      root->data += ans;
      ans = root->data;
      Solve(root->left,ans);
  }

Node* modify(Node *root)
{
    // Your code here
    int ans = 0;
    Solve(root,ans);
    return root;
}
