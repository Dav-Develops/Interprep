// C++ Friend Functions
/*Normally, private members of a class can only be accessed using public methods like getters and
 setters. But in some cases, you can use a special function called a friend function to access them
  directly.*/
  
  #include<iostream>
  using namespace std;
  
  class Employee{
    private:
    int salary;

    public:
    Employee(int s){
        salary = s;
    }

    void friend displaySalary(Employee e);
  };
  void displaySalary(Employee e){
    cout<<"Salary: "<<e.salary;
  }
  int main(){
    Employee emp1(50000);
    displaySalary(emp1); //Object 'emp1' gets copied to 'e' in 'displaySalary()''s function definition.
    return 0;
  }