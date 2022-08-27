class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int start, int des, int aux) {
        // Your code here
        if(N == 1)
        {
            cout << "move disk " << N << " from rod " << start << " to rod " << des << endl;
            return 1;
        }
        if(N>0)
        {
            long count = 1;
            count += (toh(N-1,start,aux,des));
              cout << "move disk " << N << " from rod " << start << " to rod " << des << endl;
             count += toh(N-1,aux,des,start);
             return count;
            
        }
    }

};
