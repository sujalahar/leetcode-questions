class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<string>ans;
        for(auto& pair :mp){
            if(pair.second!=1){
                pair.second =0;
            }
        }
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==1){
                k--;
                if(k==0){
                    return arr[i];
                }
            }
        }
        return "";
    }
};