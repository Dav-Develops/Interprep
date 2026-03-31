/*'Enums' is a short form of Enumerators, in which every element stores the value of previous one
to itself after adding the number '1'.  Enums always outputs numbers.*/
#include <stdio.h>

enum Level {
  LOW = 5,
  MEDIUM,
  HIGH
};
  
int main() {
  // Create an enum variable and assign a value to it
  enum Level myVar;
 
  // Print the enum variable
  printf("%d", myVar);
  printf("%d", myVar);
  
  return 0;
}