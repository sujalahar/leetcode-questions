class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        bool key = true;
        int rnp=0;
        int front = 0;

        int s = students.size();
        while(!(sandwiches[sandwiches.size()-1] == -1)){
            if(sandwiches[front]==students[front]){
                sandwiches[front] = -1;
                students[front] = -1;
                s--;
                front++;
                rnp=0;
            }
            else{
                if(rnp > s){
                  return s;
                }
                reverse(students.begin() + front + 1, students.end());
                reverse(students.begin()+ front, students.end());
                rnp++;
            }
        }
        return 0;
    }
};