class Solution{
public:
    long long findMinSum(vector<int> &A,vector<int> &B,int N){
        
        int i;
        long long sum;
          sort(A.begin(),A.end());
          sort(B.begin(),B.end());
          for(i=0;i<N;i++)
          {
            sum += abs(A[i] - B[i]);  
          }
          return sum;
    }
};
