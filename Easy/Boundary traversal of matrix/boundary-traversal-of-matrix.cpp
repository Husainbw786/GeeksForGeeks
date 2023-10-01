//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        int rowB = 0, rowE = n-1;
        int colB = 0, colE = m-1;
        vector<int>v;
        
        int i;
        for(i = colB;i<= colE;i++)
        {
            v.push_back(matrix[rowB][i]);
        }
        rowB++;
        for(i = rowB;i <= rowE;i++)
        {
            v.push_back(matrix[i][colE]);
        }
        colE--;
        if(rowB > rowE || colB > colE)
        {
            return v;
        }
        
        for(i=colE;i>= colB;i--)
        {
            v.push_back(matrix[rowE][i]);
        }
        rowE--;
        for(i=rowE; i>= rowB;i--)
        {
            v.push_back(matrix[i][colB]);
        }
        colB++;
        return v;
    }
};




//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends