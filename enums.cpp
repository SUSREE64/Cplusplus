#include <iostream>
#include<string>
using namespace std;
/* 
  enums can have set of predefined integer values for some identifiers.
  enum member values are constants throughout the program
  members are only integer values
  members can not be re assigned.
  enums can not be looped thoruhg
  the size of enum is always integer size. 
  */


enum weekday {SUN, MON, TUE, WED, THU, FRI, SAT};
enum months {JAN= 10, FEB = 20, MAR=30,APRIL, MAY, JUNE, JULY};
 

int main(){
   // get the enum value printed
   cout<< "first weekday is Monday = " << MON << endl;
   cout << "months JAN ="<< JAN <<endl;
   cout << "months April = "<< APRIL<<endl; // MAR is 30 hence automatically APRIL becomes 31
   cout << sizeof(months); // This is always equal to integer
   

    return 0;
}
