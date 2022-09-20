#include <iostream>
using namespace std;
#include <string>

#include "Control.h"
#include "View.h"
#include "Student.h"
#include "Date.h"
#include "List.h"

//control constructor
Control::Control(){}

Control::~Control(){}
//
void Control::launch()
{
  int    choice, id;
  string name, num, maj;
  float  gpa;

  initDates();
  initStudents();

  while (1) {
    view.showMenu(choice);

    if (choice == 0)
      break;

    if (choice == 1) {
      view.printStr("Number: ");
      view.readStr(num);
      view.printStr("Name: ");
      view.readStr(name);
      view.printStr("Major: ");
      view.readStr(maj);
      view.printStr("GPA: ");
      view.readFloat(gpa);
      Student* s = new Student(num,name,maj,gpa);
      stuList+=s;

    }
    else if (choice == 2) {
      view.printStr("Id: ");
      view.readInt(id);
      try{
        stuList-=id;
      } catch (char const* e){
        view.printStr(e);
      }

    }
    else if (choice == 3) {
      stuList.print();
    }
  }

  stuList.print();
  dateList.print();
}

void Control::initStudents()
{
  Student* s;

  s = new Student("101111831","Bob","CS",2.0);
  stuList+=s;
  s = new Student("120839275","Jerry","Psych",8.0);
  stuList+=s;
  s = new Student("296817462","Seinfeld","Art",7.3);
  stuList+=s;
  s = new Student("104958243","George","Film",4.9);
  stuList+=s;
  s = new Student("102958162","Newman","Welding",10.2);
  stuList+=s;
  s = new Student("100001927","Frank","History",9.5);
  stuList+=s;
  s = new Student("100273615","Charlie","Math",5.1);
  stuList+=s;
  s = new Student("172645312","Mac","Biology",6.6);
  stuList+=s;
  s = new Student("100928573","Dennis","Chemistry",11.1);
  stuList+=s;
  s = new Student("100000002","Deandra","Physics",12.0);
  stuList+=s;
  s = new Student("100294837","Wendy","Engineering",3.2);
  stuList+=s;
  s = new Student("192847361","Danny","Sandwich making",1.1);
  stuList+=s;
  s = new Student("100298881","Elaine","Buisness",10.0);
  stuList+=s;
}

void Control::initDates()
{
  Date* d;

  d = new Date(1,1,2000);
  dateList+=d;
  d = new Date(13,2,2000);
  dateList+=d;
  d = new Date(8,2,2000);
  dateList+=d;
  d = new Date(14,6,1989);
  dateList+=d;
  d = new Date(9,10,2020);
  dateList+=d;
  d = new Date(29,2,2000);
  dateList+=d;
  d = new Date(26,8,2013);
  dateList+=d;
  d = new Date(28,12,2006);
  dateList+=d;
  d = new Date(30,10,2019);
  dateList+=d;
  d = new Date(15,1,1959);
  dateList+=d;
  d = new Date(22,11,1963);
  dateList+=d;
  d = new Date(11,11,1918);
  dateList+=d;
}
