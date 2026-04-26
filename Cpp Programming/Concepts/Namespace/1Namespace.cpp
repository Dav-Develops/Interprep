/*A namespace is a way to group related code together under a name. It helps you avoid naming conflicts when your code grows or when you use code from multiple sources.
Think of a namespace like a folder: you can have a variable named x in two different folders, and they won't clash.

Why Use Namespaces?
To avoid name conflicts, especially in larger projects
To organize code into logical groups
To separate your code from code in libraries

*/

#include <iostream>
using namespace std;

// Here we define a variable called x inside a namespace called MyNamespace:
namespace varANamespace {
    int a = 10;
}

//To avoid using name of namespace every time we access it's data, use 'using namespace' same as with 'std':
namespace varBNamespace {
    int b = 20;
}
using namespace varBNamespace;

int main()
{
    cout<<varANamespace::a<<"\n";
    cout<<b;
    return 0;
}
//In short: using namespace std; is helpful for beginners, but use it with care in big programs.