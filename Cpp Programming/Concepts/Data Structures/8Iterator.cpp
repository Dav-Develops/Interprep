/* Iterator is like loops in cpp, but why do they exist when loops are provided. The reason is that
all the data structures in cpp don't work at index value (thier elements can't be accessed or modified
with index value), so iterator introduced.

Loops control flow, iterators control access

Think of it like this:
Loop = “repeat this”
Iterator = “how to move through data”
Iterator looks like index value, but it actually points to the elements (different from indices/indexes).

Iterators weren’t introduced to replace loops—they were introduced to make loops work with any data structure in a uniform, generic way.
Iterators points at the values stored in data structures, but we can't use them as pointers like:
 *it = 10; //wrong way.

👉.begin() and .end() are used to work with iterators.  Iterators mostly used with loops to trverse data strucures.
(Note: 'List' data structure does't support these.)
*/
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
using namespace std;

int main()
{
    // With vector:
    vector<int> vect1 = {1, 2, 4, 678, 49, 0, 0};
    for (auto it = vect1.begin(); it != vect1.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << "\n";
    vector<string> vect2 = {"This is a string stored in a vector data structure."};
    for (auto it = vect2.begin(); it != vect2.end(); ++it)
    {
        cout << *it;
    }
    cout << "\n";
    // With stack: stack and queue don't
    // With Deque: stack and queue don't
    // With Lists: list don't support iterator.

    // With set:
    set<int> st1 = {1, 57, 8, 9, 67, 5, 8, 9, 9, 76, 99}; // sets always auto-sorted and immutable (unchangable)
    for (auto it = st1.begin(); it != st1.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << "\n";

    map<int, char> mk1 = {{1, 'a'}, {2, 'b'}, {3, 'c'}, {4, 'd'}, {5, 'e'}};
    for (auto it = mk1.begin(); it != mk1.end(); ++it)
    {
        cout << it->first << " : " << it->second << ", ";
    }
    // first gives map-key, second gives map-value.

    return 0;
}