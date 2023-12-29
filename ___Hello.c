#include<stdio.h>

// Define a macro named big that takes two parameters a and b,
// and returns the larger of the two using the ternary operator.
#define big(a,b) a > b ? a : b

// Define a macro named swap that swaps the values of a and b using a temporary variable.
#define swap(a,b) temp=a; a=b; b=temp;

int main() {
  int a=3, b=5, temp;

  // Check if (3 + big(a, b)) is greater than b
  if ((3 + big(a, b)) > b)
     // If true, swap the values of a and b
     swap(a, b);

  // Print the values of a and b
  printf("%d %d", a, b);

  return 0;
}
