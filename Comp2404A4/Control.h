#ifndef CONTROL_H
#define CONTROL_H

#include "Student.h"
#include "View.h"
#include "Date.h"
#include "List.h"


class Control
{
  public:
    Control();
    ~Control();
    void launch();
    void initStudents();
    void initDates();

  private:
    List<Student> stuList;
    List<Date> dateList;
    View view;
};

#endif
