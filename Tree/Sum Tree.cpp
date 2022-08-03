class Solution
{
    public:
    int to_check(Node* root, bool&flag)
    {
        if(root == NULL)
        {
            return 0;
        }
        int left = to_check(root->left,flag);
        int right = to_check(root->right,flag);
     if(!(root->left==NULL && root->right==NULL) && root->data != left+right)
     {
         flag = 0;
     }
     return left+right+root->data;
         
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         bool flag = 1;
         to_check(root,flag);
         return flag;
    }
};
