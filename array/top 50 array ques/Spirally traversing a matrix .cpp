class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int startRow = 0;
        int startCol = 0;
        int endRow = r-1;
        int endCol = c-1;
        vector<int> result;
        while(startRow <= endRow && startCol <= endCol){
            int i = startCol;
            while(i <= endCol && startRow <= endRow){
                result.push_back(matrix[startRow][i]);
                i++;
            }
            startRow++;
            
            i = startRow;
            while(i <= endRow  && startCol <= endCol){
                result.push_back(matrix[i][endCol]);
                i++;
            }
            endCol--;
            
            i = endCol;
            while(i >= startCol && startRow <= endRow){
                result.push_back(matrix[endRow][i]);
                i--;
            }
            endRow--;
            
            i = endRow;
            while(i >= startRow && startCol <= endCol){
                result.push_back(matrix[i][startCol]);
                i--;
            }
            startCol++;
        }
        return result;
    }
};
