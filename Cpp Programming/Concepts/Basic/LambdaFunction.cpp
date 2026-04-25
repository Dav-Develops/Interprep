/*A lambda function is a small, anonymous function you can write directly in your code. It's useful
 when you need a quick function without naming it or declaring it separately.*/
/* Syntax
[capture_clause] (parameters) mutable { code / function body };
OR to store in variable:
 auto varName = [x] (parameters) mutable {any operation on x; return something;}

1.[Capture_clause] : This is how the lambda accesses variables from outside its scope.
👉 with it, we can capture the values like global or outer scope variables. So won't need to provide
those as parameters while calling the function.
[x]        // capture x by value
[&x]       // capture x by reference
[=]        // capture everything used by value
[&]        // capture everything used by reference
[=, &x]    // default by value, but x by reference

2.(Parameters) : Exactly like that in normal function.
(dataType variableName1, dataType variableName2)

3. mutable (This keyword is optional):
By default, captured-by-value variables are const inside the lambda.
mutable allows you to modify those copies.

4. {function Body} : write code here in '{}' brackets.

*/
 
#include<iostream>
using namespace std;

int main() {
    // Example:Here, message holds a lambda function that prints a message to the screen:
  auto message = []() {
    cout << "Hello World!\n";
  };

  message();

//   Another Example with parameters:
  auto add = [](int a, int b) {
    return a + b;
  };
  cout << add(3, 4)<<"\n";
  //Good example of Lambda function would be in \Concepts\Data Structures\7Map.cpp file
  return 0;
}