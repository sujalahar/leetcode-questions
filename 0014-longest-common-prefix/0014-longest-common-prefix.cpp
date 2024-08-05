class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int k=0;
        string ans="";
        int i=0;
        while(i<strs[0].length() && strs[0].length()!=0)
        {
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]!=strs[0][i]){
                    k=1;
                    break;
                }
            }
            if(k==1){
                break;
            }
            ans = ans+ strs[0][i];
            i++;
        }
        return ans;
    }
};