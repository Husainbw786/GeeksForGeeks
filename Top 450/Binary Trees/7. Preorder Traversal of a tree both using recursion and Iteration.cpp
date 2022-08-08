**************************RECURSIVE********************************

void traversal(Node* root, vector<int>&v)
{
    if(root == NULL)
    {
        return;
    }
    v.push_back(root->data);
    traversal(root->left,v);
    traversal(root->right,v);
    
}

vector <int> preorder(Node* root)
{
  // Your code here
  vector<int>v;
  traversal(root,v);
  return v;
}


*************************ITTRATIVE APPROACH*************************

class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
        //code here
        vector<int>v;
        if(root == NULL)
        {
            return v;
        }
        stack<Node*>s;
        s.push(root);
        
        while(!s.empty())
        {
            Node* temp = s.top();
            s.pop();
            v.push_back(temp->data);
            if(temp->right)
            {
                s.push(temp->right);
            }
            if(temp->left)
            {
                s.push(temp->left);
            }
            
        }
        return v;
    }
};

