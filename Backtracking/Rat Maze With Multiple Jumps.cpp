class Solution {
public:



   bool ratmaze(int i,int j,vector<vector<int>>&matrix,vector<vector<int>>&ans)
   {
       if( i == matrix.size()-1 && j == matrix[0].size()-1)
       {
           ans[i][j] = 1;
           return true;
       }
       
       if( check(i,j,matrix) )
       {
           ans[i][j] = 1;
           
           for(int k = 1;k<=matrix[i][j]; k++)
           {
               if( ratmaze(i,j+k,matrix,ans) )
               {
                   return true;
               }
               if( ratmaze(i+k,j,matrix,ans) )
               {
                   return true;
               }
           }
           ans[i][j] = 0;
       }
       return false;
   }
   
   bool check(int i,int j,vector<vector<int>>&matrix)
   {
       if( i >= matrix.size() || j >= matrix[0].size() || matrix[i][j] == 0)
       {
           return false;
       }
       return true;
   }
   

	vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
	   // Code here
	   int n = matrix.size();
	   int m = matrix[0].size();
	   vector<vector<int>>ans(n,vector<int>(m,0));
	   if(!ratmaze(0,0,matrix,ans))
	   {
	       return {{-1}};
	      
	   }
	    return ans;
	}

};
