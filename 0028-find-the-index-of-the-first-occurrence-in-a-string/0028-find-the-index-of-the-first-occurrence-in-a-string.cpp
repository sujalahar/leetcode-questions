class Solution {
public:
    int strStr(string haystack, string needle) {
    if(needle.size()>haystack.size()){
            return -1;
        }
    else{
        string ans = "";
            for(int i=0;i<needle.size();i++)
            {
                ans = ans + haystack[i];
            }
            if(ans==needle){
            return 0;
            }
            else{ 
                for(int i=1;(i<haystack.size());i++){
                if(haystack.size() - i >= needle.size()){
                    if (haystack.substr(i, needle.size()) == needle) {
                return i;
            }
            }
            else{
                return -1;
            }
            }
        return -1;
    }
    }
        return -1;
    }
};