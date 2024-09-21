class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        int n = students.size();
        for(int i=0;i<n;i++){
            q.push(students[i]);
        }
        int j =0 ;
        int count =0;
        while(j<n && count!= q.size()){
            if(sandwiches[j]==q.front()){
                count=0;
                j++;
                q.pop();
            }
            else{
                q.push(q.front());
                q.pop();
                count++;
            }
        }
        return q.size();
    }
};