#include <iostream>
using namespace std;
class Teacher {
    private : 
    double salary;

    public:
    string name;
    string subject;
    string dept;

    //non-parameterized constructor 
    Teacher() {
        dept = "Computer Science";
    }

    //parameterized consturctor
    Teacher(string name, string subject , string dept,double salary) {
        this->name = name;
        this->subject = subject;
         this->dept = dept;
        this->salary = salary;
    }

    

    void changeDept(string newDept) {
        dept = newDept;

    }
    //setter 
    void setSalary(double s) {
        salary = s;

    }
    //getter 
    double getSalary() {
        return salary;

    }
    void getInfo() {
        cout << "name : " << name << endl;
        cout << "Subject : " << subject << endl;
        cout << "dept : " << dept << endl;
        cout << "salary : " << salary << endl;
    }
};

int main() {
    Teacher t1("Bhagwan " ,"Java " , "Computer Science ", 90000 );
    t1.getInfo();


    //  Teacher t1;
    //  t1.name = "Bhagwan ";
    //  t1.subject = "Java  ";
    //  t1.setSalary(1450000);
    //  cout << t1.name << endl ;
    //  cout << t1.dept << endl ;
    //  cout << t1.getSalary() << endl;


    return 0;
}