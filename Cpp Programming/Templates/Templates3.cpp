// Templates can take multiple parameters:
//Example:
#include<iostream>
using namespace std;

template<typename T1, typename T2>
class Foodwork {
    T1 first; T2 then;
    public:
    Foodwork(T1 a, T2 b){
        first = a;
        then = b;
    }
    void displayOrder(){
        cout<<"First: "<<first<<", then: "<<then<<endl;
    }
};
int main(){
    Foodwork<string, int> fieldWork("plant 10", 1);
    Foodwork<string, string> kichenWork("cook", "eat");
    fieldWork.displayOrder();
    kichenWork.displayOrder();
    return 0;
}