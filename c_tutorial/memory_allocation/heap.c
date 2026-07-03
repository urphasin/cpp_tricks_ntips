#include <stdio.h>    // printf, scanf
#include <stdlib.h>   // malloc, qsort, abs
#include <string.h>   // strlen, strcpy, memset
#include <math.h>     // sqrt, pow, sin
#include <limits.h>   // INT_MAX, INT_MIN
#include <stdbool.h>  // bool, true, false
#include <ctype.h>    // isdigit, isalpha






int main() {

  // Write below this line
  /* 
      Data Types
  1. int
  2. char
  3. float
  4. double
  5. long
  6. long long
  7. unsigned __int128
  */
  
  printf("int* : %zu bytes.\n", sizeof(int*));
  printf("char* : %zu bytes.\n", sizeof(char*));
  printf("float : %zu bytes.\n", sizeof(float));
  printf("double : %zu bytes.\n", sizeof(double));
  printf("long : %zu bytes.\n", sizeof(long));
  printf("long long:* %zu bytes.\n", sizeof(long long*));
  printf("unsigned __int128 : %zu bytes.\n", sizeof(unsigned __int128));

  char* name = "otito amuga\n wise w\tor\t\tds";
  printf("%s\n", name);

  unsigned __int128 x;

  // Pointer is a derived type in C. Pointers are type constructors based on other types
  /*
      You have:

      int * → pointer to int
      char * → pointer to char
      double * → pointer to double
      struct Node * → pointer to struct Node

      So the pointer “type” is always:

      pointer-to-some-type
  */
  
  
  return 0;
}