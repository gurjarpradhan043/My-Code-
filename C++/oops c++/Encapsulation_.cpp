#include <iostream>
#include <string>
using namespace std;

class Teacher {
    private: 
    double salary;

    public: 
    string name;
    string dept; 
    string subject;

   

    void changeDep(string newDept) {
        dept = newDept;
    }
};

int main() {
    Teacher t1;
    t1.name = "pradhan";
    t1.subject = "Java";
    t1.dept = "computer scinece ";
   
    cout << t1.name << endl;
    cout << t1.subject << endl;
    cout << t1.dept << endl;
    
    return 0;
}