class Solution
{
    public:
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    
    void Inorder(Node* root, vector<int>&v)
    {
        if(root == NULL)
        {
            return;
        }
        Inorder(root->left,v);
        v.push_back(root->data);
        Inorder(root->right,v);
    }
    vector<int> merge(Node *root1, Node *root2)
    {
       //Your code here
       vector<int>v;
       Inorder(root1,v);
       Inorder(root2,v);
       sort(v.begin(),v.end());
       return v;
       
    }
};
