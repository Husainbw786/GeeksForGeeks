class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int l = 0;
        int r = n-1;
        int m = 0;
        while(l<=r)
        {
            m = (l+r)/2;
            if(arr[m] == k)
            {
                return m;
            }
            if(arr[m]>k)
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return -1;
    }
};
