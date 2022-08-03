class Solution {
public:

   bool isLeaf(Node* root)
   {
       if(root->left  || root->right)
           return false;
       else
           return true;
   }

     void LeftTree(Node* root, vector<int>&v)
     {
         if(root == NULL)
         {
             return;
         }
         if(root->left)
         {
             v.push_back(root->data);
             LeftTree(root->left,v);
         }
         else if(root->right)
         {
             v.push_back(root->data);
             LeftTree(root->right,v);
         }
     }
     void Leaf(Node* root,vector<int>&v)
     {
         if(root == NULL)
         {
             return;
         }
         Leaf(root->left,v);
         if(root->left == NULL && root->right == NULL)
         {
             v.push_back(root->data);
         }
         Leaf(root->right,v);
     }
     
     
       void RightTree(Node* root, vector<int>&v)
     {
         if(root == NULL)
         {
             return;
         }
         if(root->right)
         {
             RightTree(root->right,v);
             v.push_back(root->data);
         }
         else if(root->left)
         {
             RightTree(root->left,v);
             v.push_back(root->data);
         }
     }

    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int>v;
        if(root == NULL)
        {
            return v;
        }
        if(!isLeaf(root))
        {
            v.push_back(root->data);
        } 
        LeftTree(root->left,v);
        Leaf(root,v);
        RightTree(root->right,v);
        return v;
    }
};
