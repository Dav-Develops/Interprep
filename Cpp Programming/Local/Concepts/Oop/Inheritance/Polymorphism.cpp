/*Polymorphism means "many forms", and it occurs when we have many classes that are related to
  each other by inheritance What polymorphism actually means is “Same interface(or method), different
  behavior depending on the object.”.

  --------✍--Main things for polymorphism > 'virtual and override keywords, object-pointers (like 'Payment* p' here below.)
  --------✍--// The '->' Operator is a shortcut for writing (*pointer).member:----------
 */
//Example: Here 4 classes have a same (same named function/ method), 3 of them overrides (means 
//telling to the compiler to override/replace the base class method with this method) to 1 method
//defined in the base 'Payment class'.
#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay() {
        cout << "Generic payment\n";
    }
/*A virtual function is a member function in the base class that can be overridden in derived classes.
Virtual functions are a key part of polymorphism in C++. They let different objects respond differently to 
the same function call.*/
};

class CreditCard : public Payment {
public:
    void pay() override {
        cout << "Paying via Credit Card\n";
    }
};

class UPI : public Payment {
public:
    void pay() override {
        cout << "Paying via UPI\n";
    }
};

class PayPal : public Payment {
public:
    void pay() override {
        cout << "Paying via PayPal\n";
    }
};

int main() {
    Payment* p;

    CreditCard c;
    UPI u;
    PayPal pp;
                //As polymophism used for dynamic and scalable work, here objects_pointer 'p' descides
                //which 'pay()' method to call at runtime.

    p = &c;
    p->pay(); // This '->' means go to what the point 'p' points at and call that's pay() method.
             // Here *p points to object 'c' and calls CreditCard's pay() method.
             // The 'p->pay()' Operator is a shortcut for writing (*p).pay():

    p = &u;
    p->pay(); // This '->' means go to what the point 'p' points at and call that's pay() method.
             // Here *p points to object 'u' and calls UPI's pay() method.

    p = &pp;
    p->pay(); // This '->' means go to what the point 'p' points at and call that's pay() method.
             // Here *p points to object 'pp' and calls PayPal's pay() method.

    return 0;
}