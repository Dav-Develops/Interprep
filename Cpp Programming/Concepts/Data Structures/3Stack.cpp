/*A stack stores multiple elements in a specific order, called LIFO. LIFO stands for Last in, First Out.*/
#include<iostream>
#include<stack>
using namespace std;


int main(){
    stack <int> st1; //Elements cannot be added in stack at the time of decleration.
    //.push(element)  is used to add elements to a stack.
    st1.push(10); 
    st1.push(9); 
    st1.push(8); 
    st1.push(7); 
    st1.push(6); //Now 6 is added at last, so it is the top or first element to be taken out 
                //(we can also say poped out) or to be removed.
    // .top() is used to get or replace the top element in the stack.
    cout<<"Top element: "<<st1.top()<<"\n";
    //.pop(); is used to removed the last pushed element (the top element).
    st1.pop();
    cout<<"Top element after removing one element: "<<st1.top()<<"\n";

    st1.top() = 10000; //top element is replaced by 10000
    cout<<"Top element is replaced by: "<<st1.top()<<"\n";

    //.empty() to check if stack is empty or not.
    cout<<st1.empty()<<" If returned zero means stack is not empty, and consists 1 or more elements.";
    return 0;
}