#include <iostream>

using namespace std;

int main () {
  int arr[4] = { 10, 18, 78, 88 };
  int * ptr;
  ptr = arr; // ptr=&arr[0];

  cout << ptr << " " << *ptr << endl; // &arr[0] 10
  ++ptr;

  cout << ptr << " " << *ptr << endl; // &arr[1] 18

  return 0;
}