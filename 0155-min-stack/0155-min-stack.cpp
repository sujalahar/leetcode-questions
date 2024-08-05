class MinStack {

  
public:   
  vector<pair<int,int>>st;
    MinStack() {
    }
    
    void push(int val) {
        if(st.empty()){
            pair<int,int>p;
            p.first = val;
            p.second = val;
            st.push_back(p);
    
        }
        else{
            pair<int,int>p;
            p.first = val;
            if(st.back().second>val){
                p.second = val;
            }
            else{
                p.second = st.back().second;
            }
            st.push_back(p);
        }
    }
    
    void pop() 
    {
        st.pop_back();
    }
    
    int top(){
        if (!st.empty()) {
            return st.back().first;
        }
        return -1;  
    }
    
    int getMin() {
      if (!st.empty()) {
            return st.back().second;
        }
        return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */