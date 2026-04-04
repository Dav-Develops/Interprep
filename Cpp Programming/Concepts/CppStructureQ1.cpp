/*
Create a structure to represent a student. It should have the following members:

name (string)
age (int)
grade (char)
Then:

Create one variable of the structure.
Assign values to its members.
Print the values to the screen.*/
#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    char grade;
};

int main()
{
    student student1;
    student1.name = "Narayan";
    student1.age = 16;
    student1.grade = 'A';

    cout << "Name: " << student1.name << ", Age: " << student1.age << ", Grade: " << student1.grade;
    return 0;
}