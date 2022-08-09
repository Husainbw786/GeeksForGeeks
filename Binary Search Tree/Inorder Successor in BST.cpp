class Solution{
  public:
  
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    void Solve(Node* root,int x,Node* &ans)
    {
        if(root == NULL)
        {
            return;
        }
        Solve(root->left,x,ans);
        if(root->data > x)
        {
            if(root->data < ans->data)
            ans = root;
        }
        
        Solve(root->right,x,ans);
    }
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        Node* ans = new Node(INT_MAX);
        Solve(root,x->data,ans);
        if(ans->data == INT_MAX)
        {
            return NULL;
        }
        return ans;
        
        
    }
};
