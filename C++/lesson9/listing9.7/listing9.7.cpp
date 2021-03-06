/* Listing 9.7: Demonstrating the Use of a Destructor
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
private:
   char* buffer;

public:
   MyString(const char* initString) // constructor
   {
      buffer = NULL;
      cout << "Default constructor: creating new MyString" << endl;
      if(initString != NULL)
      {
         buffer = new char [strlen(initString) + 1];
         strcpy(buffer, initString);
      }
   }

   ~MyString() // destructor
   {
      cout << "Invoking destructor, cleaning up..." << endl;
      if (buffer != NULL)
         delete[] buffer;
   }

   int GetLength()
   {
      return strlen(buffer);
   }

   const char* GetString()
   {
      return buffer;
   }
};

int main()
{
   MyString sayHello("Hello from String Class");
   cout << "String buffer in sayHello is " << sayHello.GetLength();
   cout << " characters long" << endl;

   cout << "buffer contains: " << sayHello.GetString() << endl;

   return 0;
}
