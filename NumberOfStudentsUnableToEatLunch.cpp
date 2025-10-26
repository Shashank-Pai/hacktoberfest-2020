class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n=students.size();
        int count=0;
        while(students.size()!=0){
            if(students[0]==sandwiches[0]){
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                count=0;
            }
            else{
                n=students.size();
                if(count==n) return count;
                int x=students[0];
                students.erase(students.begin());
                students.push_back(x);
                count++;
            }
        }
        return count;
    }
};
