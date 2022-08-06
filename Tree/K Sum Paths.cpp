class Solution{
  public:
  int count = 0;
  
    void Solve(Node* root, int k,int sum)
    {
        if(root == NULL)
        {
            return;
        }
        sum += root->data;
        if(sum == k)
        {
         count++;   
        }
        Solve(root->left,k,sum);
        Solve(root->right,k,sum);
    }
    int sumK(Node *root,int k)
    {
        // code here 
        if(root == NULL)
        {
            return 0;
        }
        Solve(root,k,0);
        sumK(root->left,k);
        sumK(root->right,k);
        return count;
    }
};
