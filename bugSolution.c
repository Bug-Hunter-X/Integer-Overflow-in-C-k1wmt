#include <stdio.h>
#include <limits.h>
int main() {
  int x = INT_MAX;
  int y = 10;
  if (x + y < x) {
    printf("Integer overflow detected!\n");
  } else {
    int z = x + y;
    printf("%d\n", z);
  }

  return 0;
}