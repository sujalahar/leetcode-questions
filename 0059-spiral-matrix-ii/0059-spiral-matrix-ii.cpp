class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int right=n-1;
        int left=0;
        int top =0;
        int bottom =n-1;
        vector<vector<int>>Matrix(n, vector<int>(n));
        int k=1;
        while(top<=bottom && left<=right)
        {
            for(int i =left;i<=right;i++)
            {
                Matrix[top][i]=k;
                k++;
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                Matrix[i][right]=k;
                k++;
            }
            right--;
            if(top<=bottom){
            for(int i=right;i>=left;i--)
            {
                Matrix[bottom][i]=k;
                k++;
            }
            bottom--;
            }
            if(left<=right){
            for(int i=bottom;i>=top;i--)
            {
                Matrix[i][left]=k;
                k++;
            }
            left++;
            }
        }
        return Matrix;
    }
};