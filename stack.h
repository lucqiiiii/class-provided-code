#ifndef STACK_H
#define STACK_H
#include <cstdlib>
#include "node2.h" // THIS IS TEMPLATE NODE CLASS -- REWRITE THE NODE CLASS WE DEVELOPED

using namespace std;

template <class Item>
class stack{
 public:
  // Typedefs
  typedef std::size_t size_type;
  // constructor
  stack() {top_ptr = NULL;}
  
  ~stack(){list_clear(top_ptr);}
  // modifiers: add and deletes to a stack
  void push(const Item& entry);
  void pop();
  // observers: empty? and return top element
  size_type size() const
  {return list_length(top_ptr);}
  bool empty() const {return (top_ptr==NULL);}
  Item top() const;

 private:
  // pointer to a linked list representing a stack
    node<Item>* top_ptr;
};
#include "stack.cpp"  // <--- template class: THIS IS REQUIREDp
#endif

