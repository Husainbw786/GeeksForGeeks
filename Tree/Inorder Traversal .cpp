
class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
   void IN_order(Node* root,vector<int>&v)
   {
       if(root == NULL)
       {
           return;
       }
       IN_order(root->left,v);
       v.push_back(root->data);
       IN_order(root->right,v);
       
   }
   
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int>v;
        IN_order(root,v);
        return v;
    }
};
