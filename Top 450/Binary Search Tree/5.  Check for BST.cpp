class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
      bool ans = true;
    void Solve(Node* root,Node* &prev,int & flag)
    {
        if(root == NULL)
        {
        return;
        }
        
        Solve(root->left,prev,flag);
        
        if(prev != NULL && root->data <= prev->data)
        {
            flag = 0;
            return;
        }
        prev = root;
        
        Solve(root->right,prev,flag);
       
    }
    
    bool isBST(Node* root) 
    {
        // Your code here
        int flag = 1;
        Node* prev = NULL; 
        Solve(root,prev,flag);
        return flag;
    }
};
