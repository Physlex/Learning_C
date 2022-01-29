#include <stdio.h>
#include <string>

//Global

#define MAX 10

//Structs

//Method defn

void PrintString(char str[]);
void PrintStringViaPointer(void (*funcPointer)(char str[]), char print[]);

//Main method

main() {
  char str[MAX] = "Wow!\n";
  void (*funcPointer)(char str[]) = PrintString;
  PrintStringViaPointer(funcPointer, str);
}

//Methods

void PrintString(char str[]) {
  printf("%s", str);
  printf("%s", "Test");
}

void PrintStringViaPointer(void (*alternative)(char str[]), char print[]) {
  alternative(print);
}
