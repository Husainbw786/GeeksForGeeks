
int maximumSum( int n,int m, vector<vector<int>> &a) {

    // Complete the function
    int i;
    for(i=0;i<n;i++)
    {
        sort(a[i].begin(),a[i].end());
    }
    int sum = 0;
    int prev = INT_MAX;
    for(i=n-1; i>=0; i--)
    {
        for(int j = m-1; j>=0; j--)
        {
            if(a[i][j] < prev)
            {
                sum = sum + a[i][j];
                prev = a[i][j];
                break;
            }
            if( j == 0)
            {
                return 0;
            }
        }
        
    }
    return sum;
    
}
