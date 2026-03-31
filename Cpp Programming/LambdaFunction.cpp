/*A lambda function is a small, anonymous function you can write directly in your code. It's useful
 when you need a quick function without naming it or declaring it separately.*/
/* Syntax
[capture] (parameters) { code };*/
 
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

  cout << add(3, 4);
  return 0;
}