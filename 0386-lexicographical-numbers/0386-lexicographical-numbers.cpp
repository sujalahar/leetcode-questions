class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>ans;
        for (int i = 1; i <= n; ++i) {
            ans.push_back(std::to_string(i));  
        }
        sort(ans.begin(),ans.end());
        vector<int>a;
        for(int i=0;i<ans.size();i++){
            a.push_back(stoi(ans[i]));
        }
        return a;
    }
};