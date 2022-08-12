class Solution {
    public:
    Node* removekeys(Node* root, int l, int r) {
        // code here
        if(root == NULL)
        {
            return NULL;
        }
        root->right = removekeys(root->right,l,r);
        root->left = removekeys(root->left,l,r);
        
        if(root->data < l)
        {
            delete root->left;
            return root->right;
        }
        if(root->data > r)
        {
            delete root->right;
            return root->left;
        }
        return root;
    }
};
