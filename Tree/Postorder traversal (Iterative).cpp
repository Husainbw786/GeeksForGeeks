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
