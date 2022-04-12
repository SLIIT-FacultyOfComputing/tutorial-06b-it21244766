#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;


// Assign studentId and name
void Student::assignDetails(int pStudentId, const char pName[]) {

  studentId = pStudentId;
  strcpy(name , pName);
}

// Display StudentId and Name
void Student::display() {

  cout<<"Student id is     :"<<studentId<<endl;
  cout<<"Student name is  :"<<name<<endl;
  
}
