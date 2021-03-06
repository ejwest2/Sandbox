/* Listing 12.1: A Class with Overloaded Prefix Increment (++) and Decrement (--) Operators
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Date
{
private:
   int day, month, year;

public:
   Date(int inMonth, int inDay, int inYear)
       : month(inMonth), day(inDay), year(inYear) {};

   Date& operator++ () // prefix increment
   {
      ++day;
      return *this;
   }

   Date& operator-- () // prefix decrement
   {
      --day;
      return *this;
   }

   void DisplayDate()
   {
      cout << month << " / " << day << " / " << year << endl;
   }
};

int main()
{
   Date holiday (12, 25, 2016); // Dec 25, 2016

   cout << "The date object is initialized to: ";
   holiday.DisplayDate();

   ++holiday; // move date ahead by a day
   cout << "Date after prefix-increment is: ";
   holiday.DisplayDate();

   --holiday; // move date backwards by a day
   cout << "Date after a prefix-decrement is: ";
   holiday.DisplayDate();

   return 0;
}
