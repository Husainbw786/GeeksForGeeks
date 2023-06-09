//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    void MakeZeros(vector<vector<int> >& matrix) {
        // Code here
        vector<vector<int>>v = matrix;
        int i,j;
        int n = matrix.size();
        int m = matrix[0].size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(matrix[i][j] == 0)
                {
                    int sum = 0;
                    if(i-1 >= 0)
                    {
                        sum += matrix[i-1][j];
                        v[i-1][j] = 0;
                    }
                    if(i+1 < n)
                    {
                        sum += matrix[i+1][j];
                        v[i+1][j] = 0;
                    }
                    if(j-1 >= 0)
                    {
                        sum += matrix[i][j-1];
                        v[i][j-1] = 0;
                    }
                    if(j+1 < m)
                    {
                        sum += matrix[i][j+1];
                        v[i][j+1] = 0;
                    }
                    v[i][j] = sum;
                }
            }
        }
        matrix = v;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		ob.MakeZeros(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends