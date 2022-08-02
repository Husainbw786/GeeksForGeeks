class Solution{
  public:
    /*You are required to complete below method */
    int evalTree(node* root) {
        // Your code here
        if(root ==  NULL)
        {
            return 0;
        }
        int left = evalTree(root->left);
        int right = evalTree(root->right);
        if(root->data == "+") 
        {
            return left+right;
        }
        if(root->data == "-") 
        {
            return left-right;
        }
        if(root->data == "*") 
        {
            return left*right;
        }
        if(root->data == "/") 
        {
            return left/right;
        }
        return stoi(root->data);
    }
};
