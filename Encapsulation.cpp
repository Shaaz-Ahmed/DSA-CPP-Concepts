// Encapsulation means wrapping up member function and data member.
// Encapsulation is like a capsule we are putting the small small dots.
// Encapsulation mean wrapping up data member function in a single entity.
// Data member is also called as attribute and function is called as method.
// Full encapsulation: All data memeber inside the class should be private
// Encapsulation means information hiding or data hiding  whereas abstraction mean implementation hiding.
// If you want others to read or modify the code you can make use of get and set methods.
#include <iostream>
using namespace std;

class Employee {
private:
    int empId;
    string empName;
    float empSalary;

public:
    void setEmpId(int id) {
        empId = id;
    }

    void setEmpName(string name) {
        empName = name;
    }

    void setEmpSalary(float salary) {
        empSalary = salary;
    }

    int getEmpId() {
        return empId;
    }

    string getEmpName() {
        return empName;
    }

    float getEmpSalary() {
        return empSalary;
    }
};

int main() {
    Employee emp;
    emp.setEmpId(101);
    emp.setEmpName("John Doe");
    emp.setEmpSalary(5000.0);

    cout << "Employee ID: " << emp.getEmpId() << endl;
    cout << "Employee Name: " << emp.getEmpName() << endl;
    cout << "Employee Salary: " << emp.getEmpSalary() << endl;

    return 0;
}
