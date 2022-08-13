Node* inorder_pre(Node* root)
   {
       Node* temp = root->left;
       while(temp->right)
       {
           temp = temp->right;
       }
       return temp;
   }
   Node* inorder_suc(Node* root)
   {
       Node* temp = root->right;
       while(temp->left)
       {
           temp = temp->left;
       }
       return temp;
   }

void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

    // Your code goes here
    if(root == NULL)
    {
      return;   
    }
    if(root->key == key)
    {
        if(root->left)
        {
             pre =  inorder_pre(root);
        }
        if(root->right)
        {
            suc = inorder_suc(root);
        }
        return;
    }
    if(root->key > key)
    {
        suc = root;
        findPreSuc(root->left,pre,suc,key);
    }
    else if(root->key < key)
    {
        pre = root;
        findPreSuc(root->right,pre,suc,key);
    }

}
