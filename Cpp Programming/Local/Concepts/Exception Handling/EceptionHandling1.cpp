/*try{  variable;
        contains code that may result in an error;
        'throw(variable)' will throw that error, and the code written after 'throw' will not execute in the try block.
}
        catch(same data type of which the variable is in throw){
            cout<<"Error throwed :"<<error;
        }
*/
#include<iostream>
using namespace std;

int main(){
    try{
        int number = 1;
        if (number==1){throw number;}
    }
    catch(int errorMessage){ //'number' is integer, so 'errorMessage' also 'int' in catch
        cout<<"Error throwed :"<<errorMessage;
    }
    return 0;
}