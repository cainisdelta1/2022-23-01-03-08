#include <iostream>
#include <string.h>
typedef unsigned char BYTE; // renames existing data type

//struct is a ADT
typedef struct clock
{
  int hour;
  int min;
  int sec;
char type[10];
} CLOCK;

int main() {
  BYTE b1;

  CLOCK c1;
  c1.hour = 12;
  c1.min = 30;
  c1.sec = 55;
  strcpy(c1.type, "watch");

  std::cout << c1.hour << ":";
  std::cout << c1.min << ":";
  std::cout << c1.sec;
  std::cout << c1.type << std::endl;
}