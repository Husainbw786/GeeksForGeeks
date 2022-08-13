class Solution
{
    int ans;
    public:
    void rev_inorder(Node* root,int K, int & index)
    {
        if(root == NULL)
        {
            return;
        }
        rev_inorder(root->right,K,index);
        if(K == index)
        {
            ans = root->data;
            index++;
            return;
        }
        else
        {
            index++;
        }
        rev_inorder(root->left,K,index);
        
    }
    
    int kthLargest(Node *root, int K)
    {
        //Your code here
        int index = 1;
        ans = -1;
        rev_inorder(root,K,index);
        return ans;
        
    }
};
