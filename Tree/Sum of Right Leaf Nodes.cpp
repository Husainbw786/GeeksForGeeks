class Solution{
    public:
    void Solve(Node* root,int &sum)
    {
        if(root == NULL)
        {
            return;
        }
       
        Solve(root->right,sum);
  if(root->right && root->right->left == NULL && root->right->right == NULL)
        {
            sum += root->right->data;
        }
        Solve(root->left,sum);
    }
    
    int rightLeafSum(Node* root)
    {
         //Code here
         int sum = 0;
         Solve(root,sum);
         return sum;
    }
};
