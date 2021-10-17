/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <climits>

int main()
{
   
   cout<<"The short and int sizes demonstrated" << endl;
   /*******************************/
   short  shrtMax = SHRT_MAX;
   short  shrtMin  = SHRT_MIN;
   int intMin = INT_MIN;
   int intMax = INT_MAX;
   long long longMin = LLONG_MIN;
   long long longMax = LLONG_MAX;
   unsigned short usShrtMax = USHRT_MAX;
   unsigned int usIntMax = UINT_MAX;
   unsigned long usLongMax = ULONG_MAX;
   /*********************/
   cout << "The min of short integer is: " << shrtMin<<endl;
   cout << "The min of short integer is: " << shrtMax<<endl;
   cout<< "The size of short integer: " << sizeof(short) << " Bytes " << endl;
   cout <<"*****************"<<endl;
   /*******************/
   cout << "The min of  integer is: " << intMin << endl;
   cout << "The max  of  integer is: " << intMax <<endl;
   cout<< "The size of short integer: " << sizeof(int) << " Bytes " << endl;
   cout <<"*****************"<<endl;
   /***********************/
   cout << "The min of long long  integer is: " << longMin << endl;
   cout << "The min of  long long integer is: " << longMax <<endl;
   cout<< "The size of long long integer: " << sizeof(long long) << " Bytes " << endl;
   cout <<"*****************"<<endl;
   /***********************/
   cout << "The Max of Unsigned short integer is: " << usShrtMax <<endl;
   cout<< "The size of Unsinged short integer: " << sizeof(unsigned short) << " Bytes " << endl;
   cout <<"*****************"<<endl;
   /*********************/
   cout << "The Max of Unsigned int integer is: " << usIntMax <<endl;
   cout<< "The size of Unsinged int integer: " << sizeof(unsigned int) << " Bytes " << endl;
   cout <<"*****************"<<endl;
   /*********************/
   cout << "The Max of Unsigned long integer is: " << usLongMax <<endl;
   cout<< "The size of Unsinged long integer: " << sizeof(unsigned long) << " Bytes " << endl;
   cout <<"*****************"<<endl;
   
   return 0; 
   
}
