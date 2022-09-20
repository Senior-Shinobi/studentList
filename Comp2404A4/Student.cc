#include <iostream>
#include <iomanip>
using namespace std;
#include <string>

#include "Student.h"
#include "Object.h"

//student constructor
Student::Student(string s1, string s2, string s3, float g)
  : number(s1), name(s2), majorPgm(s3), gpa(g) { }


//overloaded << operator
ostream& operator<<(ostream& out, Student& stu)
{
  out << "Student:  " <<stu.name<<" number:  "<<stu.number<<" Major:  "<<stu.majorPgm<<" Gpa:  "<<stu.gpa<<endl;

  return out;
}
//overloaded less than
bool Student::operator<(Student const& s)
{
  if (name<s.name){
    return true;
  }
  return false;
}

bool Student::operator==(Student const& s)
{
  if (!(name.compare(s.name))){
    if (number == s.number){
      return true;
    }
  }
  return false;
}
