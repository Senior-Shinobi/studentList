#ifndef LIST_H
#define LIST_H

template <class T>
class List
{
  class Node
  {
    public:
      T* data;
      Node* next;
      Node* prev;
  };

  public:
    List();
    ~List();
    List& operator+=(T*);
    List& operator-=(const int);
    void print() const;

  private:
    Node* head;
    Node* tail;
};
//code from List.cc
template <class T>
List<T>::List() : head(NULL), tail(NULL){ }
template <class T>
List<T>::~List()
{
  Node* currNode;
  Node* nextNode;

  currNode = head;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode->data;
    delete currNode;
    currNode = nextNode;
  }
}

//overloaded += operator replaces add
template <class T>
List<T>& List<T>::operator+=(T* t)
{

  Node* tmpNode;
  Node* currNode;
  Node* prevNode;

  tmpNode = new Node;
  tmpNode->data = t;
  tmpNode->next = NULL;
  tmpNode->prev = NULL;

  prevNode = NULL;
  currNode = head;


  while (currNode != NULL) {

    if (*t == *(currNode->data)){
      delete tmpNode->data;
      delete tmpNode;
      return *this;
    }

    if (*t < *(currNode->data))
      break;

    prevNode = currNode;
    currNode = currNode->next;
  }


  if (prevNode == NULL){
head = tmpNode;
}else{
 prevNode->next = tmpNode;
}
  if (currNode == NULL){
    tail = tmpNode;
  } else{
    currNode->prev = tmpNode;
  }

 tmpNode->next  = currNode;
 tmpNode->prev  = prevNode;

return *this;
}


template <class T>
List<T>& List<T>::operator-=(const int id)
{
  Node* currNode;
  Node* prevNode;

  currNode = head;
  prevNode = NULL;

  while (currNode != NULL) {
    if (currNode->data->getId() == id)
      break;

    prevNode = currNode;
    currNode = currNode->next;
  }

// we get here if we didn't find the name or if we did find the name
  if (currNode == NULL) {
    throw "id not found";
  }

  if (prevNode == NULL){
    head = currNode->next;
    head->prev = NULL;
    }
  else{
    prevNode->next = currNode->next;
    currNode->next->prev = currNode->prev;
    }

  delete currNode->data;
  delete currNode;
  return *this;


}


template <class T>
void List<T>::print() const
{
  Node* currNode = head;

  while (currNode!=NULL) {

    cout << *(currNode->data)<<endl;

    if(currNode->next == NULL){
        cout<<"--------"<<endl<<"printing in reverse"<<endl<<"--------"<<endl<<endl;
        while(true){
            cout << *(currNode->data)<<endl;
            if(currNode->prev == NULL){
                return;
            }
            currNode = currNode->prev;
        }
    }
    currNode = currNode->next;
  }
}

#endif
