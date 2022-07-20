class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here
            int i = 0;
            sort(arr,arr+n);
            int j = n-1;
            int ans = INT_MAX;
            while(i<j)
            {
                int sum = arr[i] + arr[j];
               if(abs(sum) < abs(ans))
               {
                   ans = sum;
               }
               else if(abs(sum) == abs(ans))
               {
                   ans = max(sum,ans);
               }
               if(sum > 0)
               {
                   j--;
               }
               else
               {
                   i++;
               }
            }
            return ans;
        }
};
