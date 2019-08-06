/* 
Write a function called smallNumber() that is passed two int arguments by reference and then 
sets the smaller of the two numbers to 0. Write a main() program to exercise this function.
*/
#include <iostream>
using namespace std;

// If you declare a non-void return type, you must return something
int smallNumber(int& x, int& y) { 
    if (x < y)
        x = 0;
    else
        y = 0;
    return (x, y);    
}
//--------------------------------------------------------------
int main(){
   
   int numOne = 5;
   int numTwo = 10;
   smallNumber(numOne, numTwo);
   cout << "numOne is: " << numOne << endl << "numTwo is " << numTwo << endl; // prints `numOne is 0 numTwo is 10`

   return 0;
   }
