#include "bag.h"
#include "node.h"

// constructor
bag::bag(){
    head = NULL;
    num_nodes = 0;
}


bag::bag(const bag& src){
  // Left as an exercise

}

// destructor
bag::~bag(){
   // Left as an exercise
}

// modifiers

void bag::insert(const value_type& entry){
    list_head_insert(head, entry);
    num_nodes++;
}

bool bag::erase_one(const value_type& target){
// find target in the list
   node* found = list_search(head, target);
    if (found != NULL) {
        // copy the first element to the found node
        found->set_data(head->data());
        list_head_remove(head);
        num_nodes--;
        return true;
    }
    return false;
}

bag::size_type bag::erase(const value_type& target){
  // left as an exercise
    // HW #2
  return 0;
}
