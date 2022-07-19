int* sortExceptK(int arr[], int n, int k)
{
	// Complete the function
    int ele = arr[k];
    arr[k] = INT_MAX;
    sort(arr,arr+n);
    for(int i=n-1;i>k;i--)
    {
       
        arr[i] = arr[i-1];
         cout << arr[i] << " ";
    }
    arr[k] = ele;
    return arr;
}
