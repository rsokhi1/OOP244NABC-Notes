#include <iostream>
#include "StructStudent.h"
using namespace std;

int main() {
   struct Student sts[30];
   int i;
   for (i = 0; i < 30; i++) {
      getStInfo(&sts[i]);
   }
    // some process
   for (i = 0; i < 30; i++) {
      prnStudent(&sts[i]);
   }

   return 0;
}