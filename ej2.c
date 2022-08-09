#include <stdio.h>

int main(void) {
  int n;
  char c;
  float f;
  float *ptr_f = &f;
  char s[100];
  scanf("%d-%c-%f-%s", &n, &c, ptr_f, s);
  printf("Your number: %d\n", n);
  printf("Your char: %c\n", c);
  printf("Your float: %f\n", f);
  printf("Your string: %s\n", s);
}
