#include <stdio.h>

int Pow(int m, int n);

main() {
  printf("%6d\n", Pow(2, 10));
}

int Pow(int m, int n) {
  int initial = m;
  for (int i = 1; i < n; i++) {
    m *= initial;
  }
  return m;
}
