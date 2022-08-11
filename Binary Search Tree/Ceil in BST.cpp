int ans = 0;
  void Solve(Node* root, int input , int&min)
  {
    if(root == NULL)
    {
        return;
    }
    if(input <= root->data)
    {
        ans = root->data;
        if(min > ans)
        {
            min = ans;
        }
    }
    if(root->data < input)
    {
        Solve(root->right,input,min);
    }
    else if(root->data > input)
    {
        Solve(root->left,input,min);
    }
    
  }
int findCeil(Node* root, int input) {
    if (root == NULL) return -1;

    // Your code here
    int min = INT_MAX;
    Solve(root,input,min);
    return min;
    
}
