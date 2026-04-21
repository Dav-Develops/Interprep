//A list is similar to a vector in that it can store multiple elements of the same type and dynamically grow in size.
/*However, two major differences between lists and vectors are:

You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.
Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers.

Header file needed: <list>
List Syntex is same as vector:
list <data_type> list_name = {value1, value2};
*/
#include<iostream>
#include<list>
using namespace std;


int main(){
    list <string> list1 = {"This ","is ","list ","data."};
    for(string l1e1 : list1){
    cout<<l1e1;
    }

    // list built-in functions:
    list1.front() = "That"; //Replace initial element.
    list1.back() = "Here"; //Replace last element.
    
    cout<<"\n"<<list1.front()<<endl;
    cout<<list1.back()<<endl;

    list1.pop_front(); //Remove first element
    list1.pop_back(); //Remove last element
    
        for(string l1e1 : list1){
    cout<<l1e1;
    }
    cout<<endl;
    list1.push_front("Pushed1 ");  //Insert an element at first
    list1.push_back("pushed2");  //Insert an element at last
    for(string l1e1 : list1){
    cout<<l1e1;
    }

    list1.size(); //Get number of elements in list with listname.size()
    cout<<endl<<list1.empty(); //Checking if list is empty or not.
    return 0;
}
