class Solution {
  public:
    bool isHeap(struct Node* tree) {
        // code here
        queue<Node*>q;
        q.push(tree);
        bool flag = false;
        while(!q.empty())
        {
            Node* temp = q.front();
            q.pop();
            if(temp->left)
            {
                if(flag || temp->data <= temp->left->data)
                {
                    return false;
                }
                else
                {
                    q.push(temp->left);
                }
            }
            else
            {
                flag = true;
            }
            
            if(temp->right)
            {
                if(flag || temp->data <= temp->right->data)
                {
                    return false;
                }
                else
                {
                    q.push(temp->right);
                }
            }
            else
            {
                flag = true;
            }
        }
        return true;
    }
};
