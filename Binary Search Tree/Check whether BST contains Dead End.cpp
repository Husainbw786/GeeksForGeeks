bool isDeadEnd(Node *root)
{
    //Your code here
    map<int,int>mp;
    queue<Node*>q;
    q.push(root);
    mp[0]++;
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        mp[temp->data]++;
        if(mp.find(temp->data + 1) != mp.end() && mp.find(temp->data - 1) != mp.end())
        {
            return true;
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
        if(temp->left)
        {
            q.push(temp->left);
        }
    }
    return false;
        
    
}
