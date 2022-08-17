class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    int x1 = KnightPos[0];
	    int y1 = KnightPos[1];
	    int x2 = TargetPos[0];
	    int y2 = TargetPos[1];
	    
	    if(x1 == x2 && y1 == y2)
	    {
	        return 0;
	    }
	    int mat[N][N];
	    for(int i=0;i<N;i++)
	    {
	        for(int j=0;j<N;j++)
	        {
	            mat[i][j] = 0;
	        }
	    }
	    queue<pair<int,int>>q;
    	q.push({x1-1,y1-1});
	    
	    while(!q.empty())
	    {
	        auto p = q.front();
	        int i = p.first;
	        int j = p.second;
	        q.pop();
	        
	        if( (i+1)>= 0 && (i+1) < N && (j+2) >= 0 && (j+2) < N && mat[i+1][j+2] == 0)
	        {
	            mat[i+1][j+2] = mat[i][j] + 1;
	            q.push({i+1,j+2});
	        }
	        
	        if( (i+1) >= 0 && (i+1) < N && (j-2) >= 0 && (j-2) < N && mat[i+1][j-2] == 0)
	        {
	            mat[i+1][j-2] = mat[i][j] + 1;
	            q.push({i+1,j-2});
	        }
	        
	        if( (i+2)>= 0 && (i+2) < N && (j+1) >= 0 && (j+1) < N && mat[i+2][j+1] == 0)
	        {
	            mat[i+2][j+1] = mat[i][j] + 1;
	            q.push({i+2,j+1});
	        }
	        
	        if( (i+2)>= 0 && (i+2) < N && (j-1) >= 0 && (j-1) < N && mat[i+2][j-1] == 0)
	        {
	            mat[i+2][j-1] = mat[i][j] + 1;
	            q.push({i+2,j-1});
	        }
	        
	        if( (i-1)>= 0 && (i-1) < N && (j-2) >= 0 && (j-2) < N && mat[i-1][j-2] == 0)
	        {
	            mat[i-1][j-2] = mat[i][j] + 1;
	            q.push({i-1,j-2});
	        }
	        
	        if( (i-1)>= 0 && (i-1) < N && (j+2) >= 0 && (j+2) < N && mat[i-1][j+2] == 0)
	        {
	            mat[i-1][j+2] = mat[i][j] + 1;
	            q.push({i-1,j+2});
	        }
	        if( (i-2)>= 0 && (i-2) < N && (j+1) >= 0 && (j+1) < N && mat[i-2][j+1] == 0)
	        {
	            mat[i-2][j+1] = mat[i][j] + 1;
	            q.push({i-2,j+1});
	        }
            if( (i-2)>= 0 && (i-2) < N && (j-1) >= 0 && (j-1) < N && mat[i-2][j-1] == 0)
	        {
	            mat[i-2][j-1] = mat[i][j] + 1;
	            q.push({i-2,j-1});
	        }
	        
	    }
	    return mat[x2-1][y2-1];
	}
};
