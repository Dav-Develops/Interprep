//Write a Program to Print the Maximum Value of an Unsigned int Using One’s Complement (~) Operator.
/* '~' this tilde sign is used 1. As bitwise inverter (also called complement or 1's complement)
       :if a= 00001111, then ~a will be 11110000
    2. As class destructor.
    */
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int max1= INT_MAX;
    // <climits> and INT_MAX are side works, showing that these also exist.
    unsigned int max2=~0;
    //unsigned int max;
    // max2=0;
    // max2 =~max2;
    cout<<max1<<" "<<max2;
    
    return 0;
}