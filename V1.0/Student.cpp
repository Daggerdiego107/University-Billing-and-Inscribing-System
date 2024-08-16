#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(int tuitionNum, string name, int credits){
    this->tuitionNum = tuitionNum;
    this->name = name;
    this->credits = credits;
  if (credits < 0 || credits > 18) {
    this->credits = 0;
  }
}
Student::Student(int tuitionNum, string name){
    tuitionNum= 0;
    name = "";
}

bool Student::credIncrease(int credits){
  if (credits > 0 && this->credits + credits <= 18){
    this->credits += credits;
    return true;
  } else {
    return false;
  }
}

int Student::getTuition(){
  return tuitionNum;
}

string Student::getName(){
  return name;
}

int Student::getCredits(){
  return credits;
}

double Student::getSemesterTot()const {
  return credits * 9000;
}

void Student::printInfo(){
  cout << "\nTuition Number: " << tuitionNum << ", Student Name: " << name << ", Credits: " << credits << ", Semester Total: $" << getSemesterTot() << endl;
}