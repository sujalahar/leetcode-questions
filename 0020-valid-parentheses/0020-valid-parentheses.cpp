class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        if(s.length()&1) return false;
        int i=0;
        while(i<s.length()){
            if(st.empty()){
                if(s[i]==']' || s[i]==')' || s[i]== '}'){
                    return false;
                }
                else{
                    st.push(s[i]);
                }
            }
            else{
                if((st.top()=='{' && s[i]=='}') || (st.top()=='[' && s[i]==']')|| (st.top()=='(' && s[i]==')'))
                {
                    st.pop();        
                }
                else{
                    st.push(s[i]);
                }
            }
            i++;
        }
        if(st.empty()) return true;
        return false;
    }
};