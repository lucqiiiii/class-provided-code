#include <cassert>
#include "node2.h"

template <class Item>
void queue<Item>::enq(const Item& entry)
{
    // add node to the rear of the queue
  list_insert(rear, entry);
    
    
}

template <class Item>
void queue<Item>::deq()
{
  // check if queue is empty
  assert(!empty());   
 
  // remove node from the top of the queue
  list_head_remove(front);
}

template <class Item>
Item queue<Item>::qfront() const
{
  // check queue not empty
  assert(!empty());
  // return the top element
  return front->data();
}


