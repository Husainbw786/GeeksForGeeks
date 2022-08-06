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
