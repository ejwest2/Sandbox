/* Listing 9.15: Using Keyword 'friend' to Allow External Classes Access to Private Data and Methods
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
   friend class Utility;
   string name;
   int age;

public:
   Human(string humansName, int humansAge)
   {
      name = humansName;
      age = humansAge;
   }
};

class Utility
{
public:
   static void DisplayAge(const Human& person)
   {
      cout << person.age << endl;
   }
};

int main()
{
   Human firstMan("Adam", 25);
   cout << "Accessing private member age via friend class: ";
   Utility::DisplayAge(firstMan);

   return 0;
}

