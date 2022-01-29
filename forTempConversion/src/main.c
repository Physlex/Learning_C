#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main() {
  for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
    printf("%3d\n", fahr);
  }
}
