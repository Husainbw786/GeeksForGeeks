class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        if(A < B && A < C)
        {
            if(B<C)
            {
                return B;
            }
            else
            {
                return C;
            }
        }
            if(B < A && B < C)
        {
            if(A<C)
            {
                return A;
            }
            else
            {
                return C;
            }
        }
            if(C < A && C < B)
        {
            if(A<B)
            {
                return A;
            }
            else
            {
                return B;
            }
        }
    }
};
