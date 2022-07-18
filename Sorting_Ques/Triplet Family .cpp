vector<int> findTriplet(int arr[], int n)
{
    vector<int> result;
    // code here
    sort(arr,arr+n);
    
        int start;
       int end;
       
       for(int i=0; i<n; i++)
       {
           start = 0;
           end = n-1;
           while(start<end)
           {
               if(arr[start] + arr[end] == arr[i])
               {
                   result.push_back(arr[start]);
                   result.push_back(arr[end]);
                   result.push_back(arr[i]);
                   return result;
               }
               else if(arr[start] + arr[end] < arr[i])
               {
                   start++;
               }
               else {
                   end--;
               }
             
           }
       }
       return result;
