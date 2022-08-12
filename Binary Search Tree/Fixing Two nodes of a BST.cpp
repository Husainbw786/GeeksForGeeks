class Solution {
  public:
  Node* first, *second, *prev;
  
  void Inorder(Node* root)
  {
      if(root == NULL)
      {
          return;
      }
      Inorder(root->left);
      if(prev && (root->data < prev->data))
      {
          if(first == NULL)
          {
              first = prev;
              second = root;
          }
          else
          {
              second = root;
          }
      }
      prev = root;
      Inorder(root->right);
  }
  
    void correctBST( struct Node* root )
    {
        // add code here.
        first = NULL;
        second = NULL;
        prev = NULL;
        Inorder(root);
        swap(first->data,second->data);
        
    }
};
