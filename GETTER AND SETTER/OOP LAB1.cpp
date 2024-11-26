
#include <iostream>
using namespace std;
class Employee {
    private:
    int salary;
    public:
    void setsalary(int s) {
        salary = s;
    }
    int getsalary() {
        return(salary);
    }
};
int main()
{ 
    Employee obj;
    obj.setsalary(50000);
    cout << obj.getsalary()<<endl;
    return 0;
    }