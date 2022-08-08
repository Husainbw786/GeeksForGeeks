****************************RECURSIVE SOLUTION************************************

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void traversal(Node* root, vector<int>&v)
    {
        if(root == NULL)
        {
            return;
        }
        traversal(root->left,v);
        v.push_back(root->data);
        traversal(root->right,v);
    }
    
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int>v;
        traversal(root,v);
        return v;
    }
};
*******************************ITRATIVE SOLUTION**********************************

class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        //code here
        stack<Node*>st;
        Node* temp = root;
        vector<int>ans;
        while(true)
        {
            if(temp != NULL)
            {
                st.push(temp);
                temp = temp->left;
            }
            else
            {
                if(st.empty())
                {
                    break;
                }
                temp = st.top();
                st.pop();
                ans.push_back(temp->data);
                temp = temp->right;
            }
        }
        return ans;
    }
};
