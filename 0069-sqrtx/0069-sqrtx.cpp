class Solution {
public:
    int mySqrt(int x) {
        int store;
        for(int i=0;i<=x;i++)
        {
            if(i>46340){
                break;
            }
            else if((i*i)<=x)
            {
                store = i;
            }
        }
        return store;
    }
};