****************************RECURSIVE METHORD************************************

void traversal(Node* root,vector<int>&v)
{
    if(root == NULL)
    {
        return;
    }
    traversal(root->left,v);
    traversal(root->right,v);
    v.push_back(root->data);
}

vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int>v;
  traversal(root,v);
  return v;
}

**************************ITRATIVE METHORD***************************************

class Solution{
    public:
    vector<int> postOrder(Node* node) {
        // code here
        vector<int>ans;
        stack<Node*>st;
        st.push(node);
        while(! st.empty())
        {
            Node* temp = st.top();
            st.pop();
            ans.push_back(temp->data);
            if(temp->left)
            {
                st.push(temp->left);
            }
            if(temp->right)
            {
                st.push(temp->right);
            }
        }
        reverse(ans.begin(),ans.end());
            return ans;                                                                                             
    }
};
