class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        if(A[0][0] == 0)
        {
            return -1;
        }
        queue<pair<pair<int,int>,int>>q;
        q.push({{0,0},0});
        A[0][0] = 0;
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            int i = p.first.first;
            int j = p.first.second;
            if(i == X && j == Y)
            {
                return p.second;
            }
            if(i-1 >= 0 && A[i-1][j])
            {
                A[i-1][j] = 0;
                q.push({{i-1,j},p.second+1});
                
            }
            
            if(i+1 < N && A[i+1][j])
            {
                A[i+1][j] = 0;
                q.push({{i+1,j},p.second+1});
            }
            
            if(j+1 < M && A[i][j+1])
            {
                A[i][j+1] = 0;
                q.push({{i,j+1},p.second+1});
            }
            
            if(j-1 >= 0 && A[i][j-1])
            {
                A[i][j-1] = 0;
                q.push({{i,j-1},p.second+1});
            }
            
        }
        return -1;
    }
};
