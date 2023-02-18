 
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int ternarySearch(int arr[], int N, int K) 
    { 
       // Your code here
       int r = N-1;
       int l = 0;
       while(l<=r)
       {
           int mid1 = l + (r-l)/2;
           int mid2 = r - (r-l)/2;
           if(arr[mid1] == K)
           {
               return 1;
           }
           if(arr[mid2] == K)
           {
               return 1;
           }
           if(K < arr[mid1])
           {
               r = mid1 - 1;
           }
           else if(K > arr[mid2])
           {
               l = mid2 + 1;
           }
           else
           {
               l = mid1 + 1;
               r = mid2 - 2;
           }
       }
       return -1;
    }
};
