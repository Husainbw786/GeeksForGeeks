class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int i;
        sort(arr,arr+n);
        int *a = new int[2];
        for(i=0;i<n-1;i++)
        {
            if(arr[i] == arr[i+1])
            {
                a[0] = arr[i];
                break;
            }
        }
        int j;
        for(j=0;j<n-1;j++)
        {
            if(arr[j+1]-arr[j] > 1)
            {
                a[1] = arr[j]+1;
                break;
            }
            else
            {
                a[1] = arr[n-1] + 1;
            }
        }
         if(arr[0] > 1)
        {
            a[1] = 1;
        }
        return a;
    }
};
