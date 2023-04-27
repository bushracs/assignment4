//
//  LinkedList.cpp
//  Assignment 4 cs2
//
//  Created by Bushra Al-Qahtani on 10/04/2023.
//

#include "LinkedList.hpp"


LinkedList::LinkedList() {
    
    head = NULL;
    
}
// function to add a node
void LinkedList::addNode(int x) {
  // Searching for x in the linkedlist
  Node *cur = head;
  while (cur != NULL) {
    // If the data is found increase the count
    if (cur->data == x) {
      cur->count++;
      return;
        
    }
    cur = cur->next;
      
  }
  // If x does not exist it creates a new node
  Node *n = new Node;
  n->data = x;
  n->count = 1;
  n->next = head;
  head = n;
    
}
// function to remove a node
void LinkedList::removeNode(int x) {
  if (head == NULL) {
    return;
  }
  else if (head->data == x) {
    head = head->next;
  }
  else {
    Node *cur = head;
      
    while (cur->next != NULL) {
        
      if (cur->next->data == x ) {
          
        cur->next = cur->next->next;
          
        return;
      }
    }
  }
}

// display function
void LinkedList::display() {
  Node *cur = head;
  while (cur != NULL) {
    cout << cur->data << " --> " << cur->count << endl;
    cur = cur->next;
  }
}

int LinkedList::sumList() {
    
  Node *cur = head;
  int sum = 0;
    
  while (cur != NULL)
  {
    sum = sum + cur->data;
    cur = cur->next;
  }
    
  return sum;
}
