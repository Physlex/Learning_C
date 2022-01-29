#include <stdio.h>

main() {
  float fahrenheit = 0;
  float celsius = 0;
  int lower = 0;
  int upper = 300;
  int step = 20;
  const char header[20] = {
    'T', 'E', 'M', 'P',
    ' ',
    'C', 'O', 'N', 'V', 'E', 'R', 'S', 'I', 'O', 'N',
  };

  printf("%s\n\n", header);
  fahrenheit = lower;
  while (fahrenheit <= upper) {
    celsius = (5 / 9.0) * (fahrenheit - 32);
    printf("%3.0f %7.2f\n", fahrenheit, celsius);
    fahrenheit = fahrenheit + step;
  }
  printf("\n\n");
  celsius = lower;
  while (celsius <= upper) {
    fahrenheit = ( celsius / (5 / 9.0) ) + 32;
    printf("%3.0f %7.2f\n", celsius, fahrenheit);
    celsius += step;
  }
}
