#ifndef LOANSCHOLARSTUD_H
#define LOANSCHOLARSTUD_H
#include "ScholarStud.h"
#include <iostream>
using namespace std;

class LoanScholarStud: public ScholarStud{
protected:
double pLoan;
public:
LoanScholarStud(int tuitionNum, string name, int credits, double pScholarship, double pLoan);
LoanScholarStud(int tuitionNum, string name, double pScholarship, double pLoan);
double getPLoan();
bool setScholarLoan(double pScholarship, double pLoan);
virtual double getSemesterTot() const override;
virtual void printInfo() override;
};

#endif