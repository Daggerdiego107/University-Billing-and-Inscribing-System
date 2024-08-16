#ifndef SCHOLARSTUD_H //Student with Scholarship
#define SCHOLARSTUD_H
#include "Student.h"
#include <iostream>
using namespace std;

class ScholarStud: public Student{
protected:
double pScholarship;
public:
ScholarStud(int tuitionNum, string name, int credits, double pScholar);
ScholarStud(int tuitionNum, string name, double pScholar);
double getPScholar();
virtual double getSemesterTot() const override;
virtual void printInfo() override;
};


#endif