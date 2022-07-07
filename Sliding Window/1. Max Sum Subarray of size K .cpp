class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int N){
        // code here 
        int i = 0;
        int j = 0;
        long sum = 0;
        long m = INT_MIN;
        
         while(j<N)
         {
             sum = sum + arr[j];
             if(j-i+1 < k)
             {
                 j++;
             }
             else if(j-i+1 == k)
             {
                   m = max(m,sum);
                   sum = sum - arr[i];
                   i++;
                   j++;     
                 
             }
           
             
         }
         return m;
    }
};
