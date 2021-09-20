#include <stdio.h>

extern int a, b;
extern int c, d;

int main() {

  int a, b;
  int c, d;

  a = 20;
  b = 40;

  c = b/a;
  printf("c equals: %d", c);
  printf("\n");
  d = a + b;
  printf("a + b equals: %d", d);
  printf("\n");

  return 0;
}
