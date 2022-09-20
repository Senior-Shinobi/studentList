#include <iostream>
using namespace std;
#include <string>
#include "Object.h"
//identifier for object id
int Object::nextId = 1001;
//Object constructor
Object::Object()
{
  id     = nextId;
  ++nextId;

  cout<<"-- default ctor:  "<< id <<endl;
}
//getter for id
int Object::getId()
{
  return id;
}
