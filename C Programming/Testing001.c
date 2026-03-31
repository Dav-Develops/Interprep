/* #include <stdio.h>

// int myAge (){
//     int age = 10;
//     return age;
// }
int main() {
  int myAge = 43;  // Variable declaration
  int* ptr = &myAge;  // Pointer declaration

  // Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
  printf("%p\n", ptr);

  // Dereference: Output the value of myAge with the pointer (43)
  printf("%d\n", *ptr);
//   printf("%d\n", myAge());
  
  return 0;
}
  */
  #include <stdio.h>
#include <stdlib.h>

int add(int a,int b){
    return a+b;
}
int main() {
  int *students;
  int numStudents = 12;
  students = calloc(numStudents, 4);
  printf("%d", numStudents * sizeof(*students)); // 48 bytes
//   printf("%d",sizeof(students));
    printf("\n\n%d",add(5,5));
  return 0;
}