#include <iostream>
using namespace std;
class Person{
    char name [30];
    public:
    void setName(){
        cout<<"Enter Name:";
        cin>> name;
       
    }
    void display(){
            cout<<"Name:"<<name<<endl;
        }

};
class Sport{
    string m="basketball";
    public:
    void display(){
        cout<<"sport:"<<m<<endl;
    }
};

    

class Student:public Sport,public Person{
    public:
    void display(){
        Person::display();
        Sport::display();
       
    }
};

int main() {
    // Write C++ code here
    Student st;
    st.setName();
    st.display();

return 0;
}