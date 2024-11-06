class Solution {
public:

    string checksame(string& ans,string& s){
        int k=0;
        
        while(k<s.length())
        {
            int m = 0;
            int i = k;
            int j = k + 1;
            while(i>=0 && j<s.length())
            {
                    if(s[i]==s[j]){
                    string subpart = s.substr(i,j-i+1);
                if(subpart.length() >= ans.length()){
                    ans = subpart;
                }
                i--;
                j++;
                }
                else {
                    break;       
            }
            }
            k++;
        }
        return ans;
    }
    string checkd(string& ans1,string& s){
        int k=0;
        while(k<s.length())
        {
            int m = 0;
            int i = k;
            int j = k;
            while(i>=0 && j<s.length())
            {
                if(s[i]==s[j]){
                    string subpart = s.substr(i,j-i+1);
                if(subpart.length() >= ans1.length()){
                    ans1 = subpart;
                }i--;
                j++;
                }

                else {
                    break;
                }       
            }
            k++;
        }
        return ans1;
    }

    string longestPalindrome(string s) {
        string ans = "";
        string ans1 = "";
        ans = checksame(ans,s);
        ans1 = checkd(ans1,s);
        if(ans1.length()>ans.length())
        {
            return ans1;
        }
    return ans;
    }
};