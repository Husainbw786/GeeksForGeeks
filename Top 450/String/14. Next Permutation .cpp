class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int i;
        int index = -1;
        int prev;
        for(i=N-1;i>0;i--)
        {
            if(arr[i] > arr[i-1])
            {
                index = i;
                break;
            }
        }
        
        if(index == -1)
        {
            reverse(arr.begin(),arr.end());
        }
        else
        {
            prev = index;
            for(i = index+1; i< N;i++)
            {
                if(arr[i]<=arr[prev] && arr[i] > arr[index-1] )
                {
                    prev = i;
                }
            }
            swap(arr[index-1],arr[prev]);
            reverse(arr.begin()+index,arr.end());
        }
        return arr;
    }
};
