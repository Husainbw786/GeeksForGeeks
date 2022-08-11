class Solution{
    public:
   
     int max = INT_MIN;
    void Solve(Node* root,int sum)
    {
        if(root == NULL)
        {
            return;
        }
        if(root->left == NULL && root->right == NULL)
        {
            sum +=  root->data;
            if(sum > max)
            {
                max = sum;
            }
        }
        sum = sum + root->data;
        Solve(root->left,sum);
        Solve(root->right,sum);
    }
    
    int maxPathSum(Node* root)
    {
        //code here
        int sum = 0;
        Solve(root,0);
        return max;
    }
};
