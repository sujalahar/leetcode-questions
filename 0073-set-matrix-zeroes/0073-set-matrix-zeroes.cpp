class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int c= matrix[0].size();
        int r=matrix.size();
    vector<int>noter;
    vector<int>notec;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                    noter.push_back(i);
                    notec.push_back(j);
                }
            }
        }
        for(int j=0;j<notec.size();j++)
        {
        for(int i=0;i<r;i++)
        {
            matrix[i][notec[j]] = 0;
        }
        }
        for(int j=0;j<noter.size();j++){
        for(int i=0;i<c;i++)
        {
            matrix[noter[j]][i] = 0;
        }
        }
    }
};