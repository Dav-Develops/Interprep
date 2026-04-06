//Write a Program for Finding the Roots of a Quadratic Equation.
// Formula: x = (-b ± √(b² - 4ac)) / (2a)
// discriminant or d = (b² - 4ac);
#include<iostream>
#include<cmath>
using namespace std;

int findQuadraticRoot(int a, int b, int c){
    
    if(a==0){
        cout<<"Invalid input. 'a' cannot be zero in quadratic equation."<<endl;
        return 1;
    }
    double discriminant = (b*b)- 4*a*c;
    
    double sqrt_discriminant = sqrt(discriminant);

    if(discriminant >0){
        cout<<"Roots are real and different,"<<endl;
        cout<<(double)(-b+sqrt_discriminant)<<"\n"
        <<(double)(-b-sqrt_discriminant);
    }
    else if(discriminant==0){
        cout<<"Roots are real and equal,"<<endl;
        cout<<-b/(2*a);
    }
    else{
        cout<<"Roots are complex: ";
        cout<<-b/(2*a) <<" + i"<<sqrt_discriminant/2*a<<"\n"
        <<-b/(2*a)<<" - i"<<sqrt_discriminant/2*a;
    }
}
int main(){
    findQuadraticRoot(1,4,4);
    return 0;
}