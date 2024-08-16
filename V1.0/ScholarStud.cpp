#include "Student.h"
#include "ScholarStud.h"
#include <iostream>
using namespace std;

ScholarStud::ScholarStud(int tuitionNum, string name, int credits, double pScholarship) : Student(tuitionNum, name, credits){
  this->pScholarship = pScholarship;
}

ScholarStud::ScholarStud(int tuitionNum, string name, double pScholarship) : Student(tuitionNum, name){
  pScholarship = 0.0;
}

double ScholarStud::getPScholar(){
  return pScholarship;
}

double ScholarStud::getSemesterTot()const{
  return Student::getSemesterTot() * (1-pScholarship);
}

void ScholarStud::printInfo(){
  cout << "\nTuition Number: " << getTuition() << ", Student Name: " << getName() << ", Credits: " << getCredits() << ", Semester Total: $" << getSemesterTot() << ", Scholarship Percentage: " << (pScholarship)*100 << "%\n";
}