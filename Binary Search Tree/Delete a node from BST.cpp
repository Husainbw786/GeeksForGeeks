Node* inorder_suc(Node* root)
{
    Node* p = root->right;
    while(p->left)
    {
        p = p->left;
    }
    return p;
}

Node *deleteNode(Node *root, int X) {
    // your code goes here
    if(root == NULL)
    {
        return NULL;
    }
    if(X > root->data)
    {
        root->right = deleteNode(root->right,X);
    }
    else if(X < root->data)
    {
        root->left = deleteNode(root->left,X);
    }
    else
    {
        if(root->right == NULL)
        {
            Node* temp = root->left;
            delete(root);
            return temp;
        }
        else if(root->left == NULL)
        {
            Node* temp = root->right;
            delete(root);
            return temp;
        }
        else
        {
            Node* temp = inorder_suc(root);
            swap(root->data,temp->data);
            root->right = deleteNode(root->right,X);
        }
    }
    return root;
}
