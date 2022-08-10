
void Solve(Node* root, Node* &pre, Node* &suc,int Key)
{
    if(root == NULL)
    {
        return;
    }
    Solve(root->left,pre,suc,Key);
    if(root->key < Key)
    {
        pre = root;
    }
    if(root->key > Key && suc->key == -1)
    {
        suc = root;
    }
    Solve(root->right,pre,suc,Key);
    return;
}

void findPreSuc(Node* root, Node*& pre, Node*& suc, int Key)
{

// Your code goes here
 pre = new Node(-1);
 suc = new Node(-1);
 Solve(root,pre,suc,Key);
}
