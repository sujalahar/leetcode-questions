class Solution {
public:
    long reverse(long x) 
    {
        long rev = 0;
        if(x==0){
             rev =0;
        }
        if(x>0 && x<=INT_MAX)
        {
            while(x>0)
            {
                long rem = x%10;
                 rev = rem + rev*10;
                x=x/10;   
            }
            if(rev>INT_MAX){
                rev = 0;
            }
        }
        if(x<0 && x>=INT_MIN)
        {
            x = x*(-1);
            while(x>0)
            {
                long rem = x%10;
                 rev = rem + rev*10;
                x=x/10;    
            }
            if(rev>INT_MAX){
                rev = 0;
            }
            rev = rev*(-1);

            
        }
        if(x>INT_MAX || x<INT_MIN)
        {
            rev = 0;
        }
     return rev;

    }
    
};