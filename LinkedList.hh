//
//  LinkedList.hpp
//  Assignment 4 cs2
//
//  Created by Bushra Al-Qahtani on 10/04/2023.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp


#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

struct Node {
  int data;
// variable data inside the link
  int count;
// variable count for the number of occurences of data
  Node *next;
};

class LinkedList {
private:
  Node *head;

public:
  LinkedList();
  void addNode(int x);
  void removeNode(int x);
  void display();
  int sumList();
    //functions needed
};


#endif /* LinkedList_hpp */
