//
//  main.cpp
//  assigntment 4 cs2 vector part
//
//
//

#include <iostream>
#include <vector>
using namespace std;

void insertAfter(vector<int> &v, int firstNum, int secondNum) {
  // createing result vector
  vector<int> r;
  // loop on the original (given) vector
  for (int i = 0; i < v.size(); i++) {
    // copy the element from given vector to new one
    r.push_back(v[i]);
    if (v[i] == firstNum) {
      // if first number found in the given vector, insert the second element
      r.push_back(secondNum);
    }
  }
  v = r;
}

int main() {
  //  input number of values
  int num, x;
  cout << "How many numbers do u want to enter?";
  cin >> num;
  // creating a vector and loop num times to take all values
  vector<int> v;
  for (int i = 0; i < num; i++) {
    cout << "Enter a number: ";
    cin >> x;
    v.push_back(x);
  }
  // taking first and second number
  int first_Num, second_Num;
  cout << "Entering first number: ";
  cin >> first_Num;

  cout << "Entering second number: ";
  cin >> second_Num;
    
  // calling the function
  insertAfter(v, first_Num, second_Num);
    
  // print vector after making the changes
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}

