#include <stdio.h>

void swap(int *a, int *b) {
  int c = *b;
  *b = *a;
  *a = c;
  return;
}

int main() {
  int a = 5;
  int b = 10;

  swap(&a, &b);

  printf("a: %d, b: %d\n", a, b);
}
