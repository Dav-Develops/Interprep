// Write a Program to Implement Single-Level Inheritance.
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    int id;
    char name[100];

public:
    void set_p(int id, char *name)
    {                             // C-Style strings are passed as pointer in C++.
        strcpy(this->name, name); // 'this->name' represents to class's variable, next name is value coming as perameter.
                                  // strcpy() is used cause arrays are not simply assigned as 'this->id=id'.
        this->id = id;            // 'this->' operator avoids confusion btween variables of current class and parameters.
    } // id=id is senseless. That's why 'this->' operator is used.
    void display_p()
    {
        cout << "id: " << id << ", name: " << name << "\n";
    }
};

class Student : Person
{
private:
    char course[50];
    int fee;

public:
    void set_s(int id, char *name, char *course, int fee)
    {
        set_p(id, name);
        strcpy(this->course, course);
        this->fee = fee;
    }
    void display_s()
    {
        display_p();
        cout << " Course: " << course << ", Fee: " << fee << "\n";
    }
};
int main()
{
    Person p;
    Student s;
    char name[] = "Skyrocket";
    char course[] = "ComputerScience";
    s.set_s(0001, name, course, 24000);
    s.display_s();

    return 0;
}