// Multilevel Inheritance: when a class (c) is derived from class (b),
// where class (b) is also derived from class (a).

//Example: -->

#include<iostream>
using namespace std;

class Parent{  //class 1
    public:
    void parentShouts(){
        cout<<"Hello! Go to school.";
    }
};

class child: public Parent{};  //class 2 (derived from class 1)
class grandChild : public child{};  //class 3 (derived from class 2)
int main(){
    grandChild gc;
    gc.parentShouts();
    return 0;
}