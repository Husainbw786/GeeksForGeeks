    int i,j;
        vector<long long int>v;
        for(i=0;i<n;i++)
        {
            long long int pro = 1;
            for(j=0;j<n;j++)
            {
                if(i!=j)
                {
                    pro = pro*nums[j];
                    
                }
                
            }
            v.push_back(pro);
            
        }
        return v;
    }
};
