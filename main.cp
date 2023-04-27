//
//  main.cpp
//  Assignment 4 cs2
//
//  Created by Bushra Al-Qahtani on 10/04/2023.
//

#include <iostream>
using namespace std;

#include "LinkedList.hpp"


LinkedList create(vector<int> v) {
    
    LinkedList result;
    
  for (int i = 0; i < v.size(); i++) {
      
      result.addNode(v[i]);
  }
    
  return result;
    
}

int main() {
  vector<int> v = {1, 3, 1, 2, 3, 7, 8, 7, 8, 4, 3};
    
  LinkedList result = create(v);
    
    result.display();
    
  cout << "Sum is " << result.sumList() << endl;
    
}

