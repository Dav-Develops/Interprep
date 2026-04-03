// Multiple Inheritance: A class can also be derived from more than one base class, using 
// comma-separation:
//Example:

#include<iostream>
using namespace std;
class Father {
    // public:
    // void getFatherName(){
    //     cout<<"Torfius";
    // }
    protected:    //Let's make the program interesting with 'protected' access specifier 😄.
    string fatherName = "Torfius";
    public:
        string getFatherName(){
        return fatherName;
    }
};
class Mother {
    // public:
    // void getMotherName(){
        // cout<<"\nTorficy";
        // }
        protected:
        string motherName = "Torficy";
    public:
        string getMotherName(){
            return motherName;
        }

};

class child: public Father, public Mother{
    public:
    void childName(){
        cout<<"\nTorres";
    }
    // getFatherName();
    // getMotherName();
};

int main(){
    child c1;
    cout<<c1.getFatherName();
    cout<<"\n"<<c1.getMotherName();
    c1.childName();
    return 0;
}