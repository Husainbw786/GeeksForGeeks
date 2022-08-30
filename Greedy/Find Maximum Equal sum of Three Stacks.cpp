class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &st1,vector<int> &st2,vector<int> &st3){
        int s1=0,s2=0,s3=0;
        int c1 = st1.size(),c2 = st2.size(), c3 = st3.size();
        int i;
        for(i=0;i<N1;i++)
        {
            s1 += st1[i];
        }
        for(i=0;i<N2;i++)
        {
            s2 += st2[i];
        }
        for(i=0;i<N3;i++)
        {
            s3 += st3[i];
        }
        
        int j=0,k=0;
        i = 0;
        while(i < c1 && j < c2 && k <c3)
        {
            if(s1 == s2 && s2 == s3)
            {
                return s1;
            }
            if(s1 >= max(s2,s3))
            {
                s1 = s1 - st1[i++];
            }
            else if(s2 >= max(s1,s3))
            {
                s2 = s2 - st2[j++];
            }
            else if(s3 >= max(s2,s3))
            {
                s3 = s3 - st3[k++];
            }
        }
        return 0;
    }
};
