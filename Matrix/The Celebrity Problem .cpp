
class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        for(int i = 0; i < n; i++ ){
            int sumCol = 0;
            int sumRow = 0;
            
            for(int j = 0; j < n; j++){
                sumCol += M[j][i];
            }
            
            for(int j = 0; j < n; j++){
                sumRow += M[i][j];
            }
            
            if(sumCol == n && sumRow == 1){
                return i;
            }
            
            if(sumCol == n-1 && M[i][i] != 1 && sumRow == 0)
                return i;
        }
        return -1;
    }
};
