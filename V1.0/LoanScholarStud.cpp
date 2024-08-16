#include "LoanScholarStud.h"
#include <iostream>
using namespace std;

LoanScholarStud::LoanScholarStud(int tuitionNum, string name, int credits, double pScholarship, double pLoan) : ScholarStud(tuitionNum, name, credits, pScholarship){
  this->pLoan = pLoan;
}

LoanScholarStud::LoanScholarStud(int tuitionNum, string name, double pScholarship, double pLoan) : ScholarStud(tuitionNum, name, pScholarship){
  pLoan = 0.0;
}

double LoanScholarStud::getPLoan(){
  return (pLoan)*100;
}

bool LoanScholarStud::setScholarLoan(double pScholarship, double pLoan){
  if ((pScholarship && pLoan > 0) && (pScholarship + pLoan) <= 0.9){
    this->pLoan = pLoan;
    return true;
  } else {
    return false;
  }
}
double LoanScholarStud::getSemesterTot() const{
  double origPay = ScholarStud::getSemesterTot();  
  double scholPay = origPay * (1 - pScholarship);      
  double loanDisc = origPay * pLoan;    
  return scholPay - loanDisc;
}

void LoanScholarStud::printInfo(){
  cout << "\nTuition Number: " << getTuition() << ", Student Name: " << getName() << ", Credits: " << getCredits() << ", Semester Total: $" << getSemesterTot() << ", Scholarship Percentage: " << (pScholarship)*100 << "%, Loan Percentage: " << (pLoan)*100 << "%" <<endl;
}