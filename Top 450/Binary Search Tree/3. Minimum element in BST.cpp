void Solve(Node* root, int & min)
{
    if(root == NULL)
    {
         return;
    }
    if(root->data < min)
    {
        min = root->data;
    }
    Solve(root->left,min);
    Solve(root->right,min);
}

int minValue(Node* root) {
    // Code here
    int min = INT_MAX;
    Solve(root,min);
    int ans = -1;
    if(min < INT_MAX)
    {
        ans = min;
    }
    
    return ans;
}
