# include <iostream>

int main ()
{
   /* If we do not use 
   using namespace std; 
   below the preprocessor
   we got to use std::cout each time
   we use cout*/
   
   int a , b, c;
   a = 10; b = 20; c = 5;
   std::cout << "a+b = "<< a+b;
   std::cout<<"\n";
   std::cout << "a-b = "<< a-b;
   std::cout<<"\n";
   std::cout << "a*b*c = "<< a*b*c;
   
}
