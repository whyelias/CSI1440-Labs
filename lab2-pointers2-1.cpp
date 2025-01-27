#include <iostream>

using namespace std;

int main() {
  char myArray[] = "Hello World!";
  char *myPtr = "Hello World!";

  cout << "This is from the array: " << myArray << endl;
  cout << "This is from the pointer: " << myPtr << endl;   
  cout << endl;

  cout << "Trying to move the array ..." << endl;
  myArray += 6;
  cout << "This is from the array: " << myArray << endl;
  return 0;
}
