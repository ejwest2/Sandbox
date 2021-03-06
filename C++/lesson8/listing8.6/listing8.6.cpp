/* Listing 8.6: Demonstrating That Pointers to Different Types Have the Same Size
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   cout << "sizeof fundamental types:" << endl;
   cout << "sizeof(char) = " << sizeof(char) << endl;
   cout << "sizeof(int) = " << sizeof(int) << endl;
   cout << "sizeof(double) = " << sizeof(double) << endl;

   cout << endl;

   cout << "sizeof pointers to fundamental types:" << endl;
   cout << "sizeof(char*) = " << sizeof(char*) << endl;
   cout << "sizeof(int*) = " << sizeof(int*) << endl;
   cout << "sizeof(double*) = " << sizeof(double*) << endl;

   return 0;
}
