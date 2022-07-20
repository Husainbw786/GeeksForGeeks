class Solution {
  public:
     int count(int arr[],int N ,int val)
     {
        int i;
        int count = 0;
        sort(arr,arr+N);
        for(i=0;i<N-2;i++)
        {
            int k = N-1;
            int j = i+1;
            while(j<k)
            {
                int sum = arr[i] + arr[j] + arr[k];
                if(sum > val)
                {
                    k--;
                }
                else
                {
                    count += (k-j);
                    j++;
                }
                
                
            }
        }
      return count;
     }
  
    int countTriplets(int arr[], int n, int L, int R) {
        // code here
        int x = count(arr,n,R);
        int y = count(arr,n,L-1);
        return x-y;
        }
};
