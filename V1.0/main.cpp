#include "Student.h"
#include "ScholarStud.h"
#include "LoanScholarStud.h"
#include <iostream>

int main() {
  Student a1(123, "Juan", 15);
  a1.printInfo();

  ScholarStud a2(456, "Pedro", 18, 0.2);
  a2.printInfo();

  LoanScholarStud a3(789, "Maria", 10, 0.3, 0.1);
  a3.printInfo();
}