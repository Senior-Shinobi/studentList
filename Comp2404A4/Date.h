#ifndef DATE_H
#define DATE_H

#include "Object.h"

class Date : public Object
{
  friend ostream& operator<<(ostream& , Date& );

  public:
    Date(int=0, int=0, int=2000);
    ~Date();
    void setDate(int, int, int);
    bool operator==(Date&);
    bool operator<(Date&);
    void printLong() const;
    void printLong();

  private:
    int day;
    int month;
    int year;
    int  lastDayInMonth();
    bool leapYear();
    string getMonthStr() const;
};

#endif
