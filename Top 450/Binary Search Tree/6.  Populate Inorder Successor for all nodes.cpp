class Solution
{
public:

    void Solve(Node* root, vector<Node*>&v)
    {
        if(root == NULL)
        {
            return;
        }
        Solve(root->left,v);
        v.push_back(root);
        Solve(root->right,v);
    }

    void populateNext(Node *root)
    {
        //code here
        vector<Node*>v;
        Solve(root,v);
        for(int i=0;i<v.size()-1;i++)
        {
            v[i]->next = v[i+1];
        }
    }
};
