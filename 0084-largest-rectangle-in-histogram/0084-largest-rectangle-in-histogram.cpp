class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        long long maxarea =0;
        int key = heights[0];
       for(int i=0;i<heights.size();i++){
        long long sum=heights[i];
        if(heights[i]==key && i>1){
            continue;
        }
        else{
            for(int j=i-1;j>=0;j--){
                if(heights[i]>heights[j]){
                    break;
                }
                sum+=heights[i];
            }
            for(int j=i+1;j<heights.size();j++){
                if(heights[i]>heights[j]){
                    break;
                }
                sum+=heights[i];
            }
            key=heights[i];
        }
            maxarea = max(maxarea,sum);
       }
       return maxarea; 
    }
};