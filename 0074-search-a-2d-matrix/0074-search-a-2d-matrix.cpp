class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int sizer = matrix.size();
        int sizec = matrix[0].size();
        int n = matrix[0].size()*matrix.size()-1;
        int start = 0;
        int end = n;
        int mid = start + (end - start)/2;
        while(start<=end)
        {
            if(matrix[mid/sizec][mid%sizec]==target)
            {
                return true;
            }
            else if(matrix[mid/sizec][mid%sizec]>target)
            {
                end = mid - 1;
            }
            else if(matrix[mid/sizec][mid%sizec]<target)
            {
                start = mid + 1;
            }
            mid = start + (end - start)/2;
        }
        return false;
    }
};