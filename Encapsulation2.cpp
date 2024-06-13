#include<iostream>
using namespace std;

class Employee{
private:
    int empid;
    string empname;
public:
    void setEmpid(int id){
        empid = id;
    }
    void setEmpname(string name) {
    empname = name;
    }
    int get(){
    return empid;
    }
    string get(){

}
};
int main() {
Employee emp1;
emp1.setEmpid(100);
cout<<"\n";
cout<<emp1.get();

return 0;
}
