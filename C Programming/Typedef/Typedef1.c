/*C 'typedef' used to simplify/clerify code (increase readability).
The typedef keyword lets you create a new name (an alias) for an existing type. This can make complex declarations easier to read, and your code easier to maintain.

For example, instead of always writing float, we can create a new type called Temperature to make the code clearer:

Example
*/
#include <stdio.h>

typedef float Temperature;  // so from now 'Temperature' means 'float' 

int main() {
  Temperature today = 25.5;
  Temperature tomorrow = 18.6;

  printf("Today: %.1f C\n", today);
  printf("Tomorrow: %.1f C\n", tomorrow);

  return 0;
}