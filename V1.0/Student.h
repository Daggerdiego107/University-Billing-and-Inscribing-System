#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student{
private:
int tuitionNum;
string name;
int credits;
public:
Student(int tuitionNum, string name, int credits);
Student(int tuitionNum, string name);
bool credIncrease(int credits);
int getTuition();
string getName();
int getCredits();
virtual double getSemesterTot() const;
virtual void printInfo();
};


#endif