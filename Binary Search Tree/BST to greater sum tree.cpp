class Solution
{
    public:
    int sum = 0;
    void transformTree(struct Node *root)
    {
        //code here
        if(root == NULL)
        {
            return;
        }
        int y = root->data;
        transformTree(root->right);
        sum += root->data;
        root->data = sum - y;
        transformTree(root->left);
            
        
    }
};
