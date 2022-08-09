int minValue(Node* root) {
    // Code here
    if(root == NULL)
    {
        return -1;
    }
    if(root->left == NULL)
    {
        return root->data;
    }
    int ans = minValue(root->left);
    return ans;
}
