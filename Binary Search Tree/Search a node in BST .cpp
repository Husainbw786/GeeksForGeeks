bool search(Node* root, int x) {
    // Your code here
    
    if(root == NULL)
    {
        return false;
    }
    if(root->data == x)
    {
        return true;
    }
    if(root->data > x)
    {
        search(root->left,x);
    }
    else
    {
        search(root->right,x);
    }
    
}
