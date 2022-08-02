class Solution
{
    public:
    bool check(Node* a,Node* b)
    {
        if(a == NULL && b == NULL)
        {
            return true;
        }
        if(a == NULL || b == NULL)
        {
            return false;
        }
        if(a->data != b->data)
        {
            return false;
        }
        else
        {
            return check(a->left,b->right) && check(a->right,b->left);
        }
        
        
    }
    int areMirror(Node* a, Node* b) {
    // Your code here
        if(check(a,b))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};
