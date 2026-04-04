//Date and Time is not required much.
// For now
#include<iostream>
#include<ctime>
using namespace std;

int main(){
    time_t currentTime;
    time(&currentTime);
    cout<<"Current time and date: "<<ctime(&currentTime);
    
    return 0;
}