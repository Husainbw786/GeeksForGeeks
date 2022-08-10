class Solution
{
    public:
    //Function to find the nodes that are common in both BST. 
    
    void Solve(Node* root, vector<int>&v)
    {
        if(root == NULL)
        {
            return;
        }
        Solve(root->left,v);
        v.push_back(root->data);
        Solve(root->right,v);
        
        
    }
    vector <int> findCommon(Node *root1, Node *root2)
    {
     //Your code here
     unordered_set<int>st;
     vector<int>v1;
     vector<int>v2;
     vector<int>ans;
     Solve(root1,v1);
     Solve(root2,v2);
     for(int i=0;i<v1.size();i++)
     {
         st.insert(v1[i]);
     }
     for(int i=0;i<v2.size();i++)
     {
         if(st.find(v2[i]) != st.end())
         {
             ans.push_back(v2[i]);
         }
     }
     return ans;
     
    }
};

