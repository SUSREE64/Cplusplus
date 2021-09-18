# include <iostream>
// the below line ensures that you don't require to add std:: each time
//using namespace std;
//another way of using this
using std::cout; 
using std::cin; 

int main ()
{
   /* If we do not use 
   using namespace std; 
   below the preprocessor
   we got to use std::cout each time
   we use cout*/
   int a , b, c;   
   cout << " Enter an integer Value for a :\n";
   cin>>a;
   cout <<"Enter an integer value for b :\n";
   cin>>b;
   cout <<"Enter an integer value for c :\n";
   cin>>c;
   cout << "a+b = "<< a+b;
   cout<<"\n";
   cout << "a-b = "<< a-b;
   cout<<"\n";
   cout << "a*b*c = "<< a*b*c;
   cout <<std::endl;
   printf("This also works\n");
   printf("The sum of a,b,c is %i\n", a+b+c);
   
   return 0;

}
