class Solution {
public:
    vector<int> BoundaryElements(vector<vector<int>>&matrix){
        // Code here
        int n = matrix.size();
        if(n==1)
        {
            return {matrix[0][0]};
        }
            vector<int>ans;
            int i=0;
            int j;
            for(j=0;j<n;j++)
            {
                ans.push_back(matrix[i][j]);
            }
                i++;
                while(i<n-1)
                {
                    ans.push_back(matrix[i][0]);
                    ans.push_back(matrix[i][n-1]);
                    i++;
                }
                for(j=0;j<n;j++)
                {
                    ans.push_back(matrix[i][j]);
                }
                return ans;
            
        
    }
};
