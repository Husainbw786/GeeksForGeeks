class Solution{
  public:
  int carAssembly(vector<vector<int>>& a, vector<vector<int>>& T, vector<int>& e, vector<int>& x){
      //Code Here
      int m = a[0].size()-1;
      a[0][0] += e[0];
      a[1][0] += e[1];
      a[0][m] += x[0];
      a[1][m] += x[1];
      int j;
      for(j=0;j<m;j++)
      {
          a[0][j+1] += min(a[0][j], a[1][j] + T[1][j+1]);
          a[1][j+1] += min(a[1][j], a[0][j] + T[0][j+1]);
      }
      return min(a[0][m],a[1][m]);
  }
};
