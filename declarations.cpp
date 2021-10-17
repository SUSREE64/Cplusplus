/******************************************************************************
Variable declaration and initialization styles

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
   /** Various ways of declaring and assigning variables**/
   
   /*Style 1*/
   int a; 
   a = 20;
   /*Style 2*/
   int x = 30;
   
   /*array declarations */
   int arr1[5]; // declaring with size without elements
   int arr2[] = {1,2,3,4}; // no size but with elements
   int arr3[4] = {1,3,4,5};
   /* Character declarations */
   char ch1;
   ch1 = 'H'; // Note single quotes only
   char ch2 = 'M'; // Declare assign side by side
   
   /* character arrays or strings  c style */
   char str3[5];
   char str1[6] = "Hello"; // the last character is automatically assigned as '/0'
   char str2[] = "My Name is sree"; // Another way without the size
   //populate the str3 index wise this way we can assign beyond its size declared;
   str3[0] = 'H';
   str3[1] = 'E';
   str3[2] = 'L';
   str3[3] = 'L';
   str3[4] = 'O';
   str3[5] = 'M';
   str3[6] = 'T';
   str3[7] = '\0';// string end character.
   cout << str3<< endl; // prints out HELLOMT
   
   // c++ strings
   string s = "Hello I am sree";
   cout << s << endl;
   
   
   return 0; 
   
}
