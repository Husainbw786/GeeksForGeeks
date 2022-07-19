int* greaterElement(int arr[], int n)
{
    // Complete the function
    vector<int>v;
    int i;
    for(i=0;i<n;i++)
    {
        v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
    int *ans = new int[n];
    unordered_map<int,int>mp;
    for(i=0;i<n;i++)
    {
        mp[v[i]] = v[i+1];
    }
    mp[v[n-1]] = -10000000;
    for(i=0;i<n;i++)
    {
        ans[i] = mp[arr[i]];
    }
    return ans;
    
} 
