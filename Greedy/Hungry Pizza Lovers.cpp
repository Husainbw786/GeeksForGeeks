
vector<int> permute(vector<vector<int>> &arr, int n)
{
    
    // Complete the function
    vector<pair<int,int>>v;
    int i;
    for(i=0;i<n;i++)
    {
        int sum = arr[i][0] + arr[i][1];
        v.push_back({sum,i});
    }
    vector<int>ans;
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        ans.push_back(v[i].second+1);
    }
    return ans;
    
}
