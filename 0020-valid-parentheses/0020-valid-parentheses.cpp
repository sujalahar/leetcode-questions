class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(st.size()==0){
                st.push(s[i]);
            }
            else{
            char top = st.top();
            if((top == '{' && s[i]=='}' )|| (top == '(' && s[i]==')' )|| (top == '[' && s[i]==']')){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            }
        }
        if(st.size()==0) return true;
        return false;
    }
};