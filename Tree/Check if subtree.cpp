class Solution
{
  public:
    //Function to check if S is a subtree of tree T.
    bool identical(Node* T ,Node* S)
    {
        if(T== NULL && S == NULL)
        {
            return true;
        }
        if(T == NULL || S == NULL)
        {
            return false;
        }
        if(T->data == S->data)
        {
            return (identical(T->left,S->left) &&  identical(T->right ,S->right));
        }
        else
        {
            return false;
        }
    }
    bool isSubTree(Node* T, Node* S) 
    {
        // Your code here
        if(S == NULL)
        {
            return true;
        }
        if(T == NULL)
        {
            return false;
        }
        if(identical(T,S))
        {
            return true;
        }
        
        return (isSubTree(T->left,S) || isSubTree(T->right,S));
        
    }
};
