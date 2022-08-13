class Solution{
  public:
    /*The function should return the root of the modified tree*/
    Node* deleteNode(Node* root, int k)
    {
        //Your code here
        if(root == NULL)
        {
            return NULL;
        }
        if(root->data >= k)
        {
            root = deleteNode(root->left,k);
        }
        else
        {
            root->right = deleteNode(root->right,k);
        }
        return root;
    }
};
