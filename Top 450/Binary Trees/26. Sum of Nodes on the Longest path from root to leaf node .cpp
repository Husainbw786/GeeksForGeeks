class Solution
{
public:
void Solve(Node* root ,int sum,int len,int & max_len,int & maxi)
{
    if(root == NULL)
    {
        if(len > max_len)
        {
            max_len = len;
            maxi = sum;
        }
        else if(len == max_len)
        {
            maxi = max(maxi,sum);
        }
        return;
    }
    sum += root->data;
    Solve(root->left,sum,len+1,max_len,maxi);
    Solve(root->right,sum,len+1,max_len,maxi);
    
}
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int len = 0;
        int max_len = INT_MIN;
        int sum = 0;
        int maxi = INT_MIN;
        Solve(root,sum,len,max_len,maxi);
        return maxi;
        
    }
};
