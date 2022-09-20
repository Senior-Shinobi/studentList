#ifndef OBJECT_H
#define OBJECT_H

using namespace std;

class Object
{
  public:
    Object();

    int getId();


  private:
    static int nextId;
    int id;
  
};

#endif
