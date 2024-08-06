class Solution {
public:
    int climbStairs(int n) {
        if(n==0)
        return 0;
        else if(n==1)
        return 1;
        else if(n==2)
        return 2;
        else if(n==3)
        return 3;
        else{
        int key,store=3;
        int store1=2;
        int store2=0;

        for(int i=4;i<=n;i++)
        {
            store2=store;
            store=store1+store2;
            store1=store2;
        }
        return store;
        }
        return 0;
    }
};