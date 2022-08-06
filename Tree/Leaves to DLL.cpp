Node* tail;
Node* head;
Node* preorder(Node* root)
{
    if(root == NULL)
    {
        return root;
    }
    if(root->left == NULL && root->right == NULL)
    {
        if(tail == NULL)
        {
            head = root;
            tail = root;
        }
        else
        {
            tail->right = root;
            root->left = tail;
            tail = root;
        }
        return NULL;
    }
    root->left = preorder(root->left);
    root->right = preorder(root->right);
    return root;
}
Node * convertToDLL(Node *root){
    // add code here.
    tail = NULL;
    head = NULL;
    preorder(root);
    return head;
}
