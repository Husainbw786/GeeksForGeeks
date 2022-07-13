vector<int> deleteElement(int arr[],int n,int k)
{
    // complete the function
    vector<int>v(arr,arr+n);
    int i;
    
    while(k--)
    {
        for(i=0;i<v.size()-1;i++)
        {
            if(v[i] <v[i+1])
            {
                v.erase(v.begin()+i);
                break;
            }
        }
    }
    return v;
    
}
