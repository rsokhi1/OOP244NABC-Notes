#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
const double PI = 3.14159265;
int main() {
   int a;
   int b = 12;
   int c;
   a = b + 4;
   printf("%d\n", a);
   a = a + 10;
   printf("%d\n", a);
   a = b < 10;
   printf("%d\n", a);
   a = b > 10;
   printf("%d\n", a);
   c = a = b + 20;
   printf("%d\n", a);
   printf("%d\n", c);
   a = !!b;
   printf("%d\n", a);
   return 0;
}