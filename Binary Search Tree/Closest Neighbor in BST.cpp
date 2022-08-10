int findMaxForN(Node* root, int N)
{
    int ans = 0;
    while(root != NULL)
    {
        
        if(root->key > N)
        {
            root = root->left;
        }
        else if(root->key <= N)
        {
            ans = root->key;
            root = root->right;
        }
       
    }
    return ans;
    
}
