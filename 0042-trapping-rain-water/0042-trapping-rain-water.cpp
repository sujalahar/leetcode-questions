class Solution {
public:
    int trap(vector<int>& height) {
        stack<int>st;
        if(height.size()==1 || height.size()==2) return 0;
        int i =0;
        while(height[i]==0){
            i++;
            continue;
        }
        if(i==height.size()) return 0;
        st.push(height[i]);
        int store =0;
        int n = height[i];
        i++;
        while(i<height.size()){
            if(n>height[i]){
                st.push(height[i]);
            }
            else if(n<=height[i]){
                while(!st.empty()){
                    store+=(n-st.top());
                    st.pop();
                }
                st.push(height[i]);
                n =height[i];
            }
            i++;
        } 
       
        if(!st.empty()){
            while(st.top()==0){
                st.pop();
                if(st.empty()){
                    break;
                }
            }
            if(!st.empty()){
            stack<int>s;
            n=st.top();
            s.push(n);
            st.pop();
            while(!st.empty()){
                if(n>st.top()){
                    s.push(st.top());
                }
                else{
                    while(!s.empty()){
                        store+=n-s.top();
                        s.pop();
                    }
                    s.push(st.top());
                    n=st.top();
                }
                st.pop();
            }
            }
        }
        return store;
    }
};