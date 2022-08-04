
class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       Node* temp1 = NULL;
       Node* temp2 = NULL;
       if(root == NULL)
       {
           return root;
       }
       if(root->data == n1 || root->data == n2)
       {
           return root;
       }
       temp1 = lca(root->left,n1,n2);
       temp2 = lca(root->right,n1,n2);
     if(temp1 && temp2)
     {
         return root;
     }
     else if(temp1)
     {
         return temp1;
     }
     else
     {
         return temp2;
     }
        
    }
};
