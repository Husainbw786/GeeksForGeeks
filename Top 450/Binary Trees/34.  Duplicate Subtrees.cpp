vector<Node*>v;
unordered_map<string,int>mp;
string Solve(Node* root)
{
    if(root == NULL)
    {
        return "$";
    }
    string s = "(";
    s = s + to_string(root->data);
    s = s + Solve(root->left);
    s = s + Solve(root->right);
    s += ")";
    mp[s]++;
    if(mp[s] == 2)
    {
        v.push_back(root);
    }
    return s;
}

vector<Node*> printAllDups(Node* root)
{
    // Code here
    v.clear();
    mp.clear();
    Solve(root);
    return v;
}
