class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool sym(struct Node* root1, struct Node* root2)
    {
        if(root1 == NULL && root2 == NULL)
        {
            return true;
        }
        if((root1 == NULL && root2 != NULL) || (root2 == NULL && root1 != NULL))
        {
            return false;
        }
        if(root1->data != root2->data)
        {
            return false;
        }
        return (sym(root1->left,root2->right)&& sym(root2->left,root1->right));
    }
    
    bool isSymmetric(struct Node* root)
    {
	    // Code here
	    if(root == NULL)
	    {
	        return true;
	    }
	    return sym(root->left,root->right);
    }
};
