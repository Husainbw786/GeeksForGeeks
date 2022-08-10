Node* insert(Node* root, int Key) {
    // Your code here
    if(root == NULL)
    {
        return new Node(Key);
    }
    else if(Key > root->data)
    {
        root->right = insert(root->right,Key);
    }
    else if(Key < root->data)
    {
        root->left = insert(root->left,Key);
    }
    else
    {
        return root;
    }
    return root;
}
