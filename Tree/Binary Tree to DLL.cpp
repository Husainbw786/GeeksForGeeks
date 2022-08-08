class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    void solve(Node* root, Node* &head,Node* &prev,int &flag)
    {
        if(root == NULL)
        {
            return;
        }
        solve(root->left,head,prev,flag);
        if(flag==0)
        {
            flag=1;
            head = root;
            prev = root;
        }
        else
        {
            prev->right = root;
            prev->right->left = prev;
            prev = root;
        }
        solve(root->right,head,prev,flag);
    }
    Node * bToDLL(Node *root)
    {
        // your code here
        Node* head = NULL;
        Node* prev = NULL;
        int flag = 0;
        solve(root,head,prev,flag);
        return head;
        
    }
};
