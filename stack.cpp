#include <cassert>
#include "node2.h"

template <class Item>
void stack<Item>::push(const Item& entry)
{
    // add node to the top of the stack
  list_head_insert(top_ptr, entry);
}

template <class Item>
void stack<Item>::pop()
{
  // check if stack is empty
  assert(!empty());   
 
  // remove node from the top of the stack
  list_head_remove(top_ptr);
}

template <class Item>
Item stack<Item>::top() const
{
  // check stack not empty
  assert(!empty());
  // return the top element
  return top_ptr->data();
}


