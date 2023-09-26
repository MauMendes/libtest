#include <iostream>
#include "mytest.h"

using namespace std;

int my_add( int a, int b ) {
  cout << "my_add: : " << (a + b) << endl; 
  return a + b;
}

int my_sub( int a, int b ) {
  cout << "my_sub: : " << (a - b) << endl; 
  return a - b;
}
