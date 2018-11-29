#ifndef QUEUE_H
#define QUEUE_H
#include <cstdlib>
#include "node2.h" // THIS IS TEMPLATE NODE CLASS -- REWRITE THE NODE CLASS WE DEVELOPED

using namespace std;

template <class Item>
class queue{
 public:
  // Typedefs
  typedef std::size_t size_type;
  // constructor
    queue() {front=NULL; rear=NULL; size=0;}
  
    ~queue(){list_clear(front); rear=NULL; size=0;}
  // modifiers: add and deletes to a stack
  void enq(const Item& entry);
  void deq();
  // observers: empty? and return top element
  bool empty() const {return (front==NULL);}
  Item qfront() const;

 private:
  // pointer to a linked list representing a stack
    node<Item>* front;
    node<Item>* rear;
    int size;
};
#include "queue.cpp"  // <--- template class: THIS IS REQUIREDp
#endif

