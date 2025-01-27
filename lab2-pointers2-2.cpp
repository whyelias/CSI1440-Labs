#include <iostream>

using namespace std;

char* giveMemory( ) {
    char myArray[] = "Hello World!";
    return myArray;
}

int main() {
    char *myPtr;

    myPtr = giveMemory();
    cout << myPtr << endl;

    myPtr[1] = 'o';
    myPtr[2] = 'w';
    myPtr[3] = 'd';
    myPtr[4] = 'y';

    cout << endl << myPtr << endl;

    return 0;
}
