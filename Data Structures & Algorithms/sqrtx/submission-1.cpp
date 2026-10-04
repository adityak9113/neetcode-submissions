class Solution {
public:
    int mySqrt(int x) 
    {
        int start=1,end=x,result=0;

        while(start<=end)
        {
            long long mid= start+(end-start)/2;
            long long square=mid*mid;

            if(square==x)
            {
                return mid;
                break;
            }

            if(square>x)
            {
                end=mid-1;
            }

            else
            {
                result=mid;
                start=mid+1;
            }
        } 

        return result;
    }
};