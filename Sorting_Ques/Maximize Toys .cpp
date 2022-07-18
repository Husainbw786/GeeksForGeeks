
class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        // code here
        sort(arr.begin(),arr.end());
        int sum = 0;
        int count = 0;
        int i;
        for(i=0;i<N;i++)
        {
             sum = sum + arr[i];
            if(sum <= K)
            {
                count++;
                
            }
            else
            {
                break;
            }
            
        }
        return count;
        
    }
};
