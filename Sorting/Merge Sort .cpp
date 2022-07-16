class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int n1 = m-l+1;
         int n2 = r-m;
         int temp1[n1];
         int temp2[n2];
         int i;
         for(i=0;i<n1;i++)
         {
             temp1[i] = arr[l+i];
         }
         for(i=0;i<n2;i++)
         {
             temp2[i] = arr[m+1+i];
         }
         int k = l;
         int j = 0;
         i = 0;
         while( i < n1 && j < n2)
         {
             if(temp1[i] > temp2[j])
             {
                 arr[k] = temp2[j];
                 j++;
                 k++;
             }
             else
             {
                 arr[k] = temp1[i];
                 i++;
                 k++;
             }
         }
         while(i<n1)
         {
             arr[k] = temp1[i];
             i++;
             k++;
         }
         while(j<n2)
         {
             arr[k] =  temp2[j];
             j++;
             k++;
         }
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        int mid  = (l+r)/2;
        if(l<r)
        {
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            
            merge(arr,l,mid,r);
        }
    }
};
