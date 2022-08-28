class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int a = arr[0] ;
        int b = arr[n-1];
        int diff = b - a;
        int i;
        for(i=1;i<n;i++)
        {
            a = min(arr[0]+k , arr[i] - k);
            b = max(arr[i-1] + k, arr[n-1] - k);
            diff = min(b-a,diff);
        }
        return diff;
    }
};
