# include <iostream>
// the below line ensures that you don't require to add std:: each time
using namespace std;

int main ()
{
   /* If we do not use 
   using namespace std; 
   below the preprocessor
   we got to use std::cout each time
   we use cout*/
   

   int a , b, c;
   a = 10; b = 20; c = 5;
   cout << "a+b = "<< a+b;
   cout<<"\n";
   cout << "a-b = "<< a-b;
   cout<<"\n";
   cout << "a*b*c = "<< a*b*c;
   
}
