class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        stack<int>ans;
        vector<int>h(heights.size());
        h[heights.size()-1] = 0;
        ans.push(heights[heights.size()-1]);
        for(int i=heights.size()-2;i>=0;i--){
            int count=0;
            if(ans.top()<heights[i]){
                while(!ans.empty() && ans.top()<heights[i]){
                    ans.pop();
                    count++;
                }
                if(!ans.empty()){
                    count++;
                }
            }
            else{
                count++;
            }
            ans.push(heights[i]);
            h[i]=count;
        }
        return h;
    }
};