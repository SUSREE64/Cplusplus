# include <iostream>
# include <string>
# include <string.h>
using namespace std;
/*
Unions do not allow direct strings as members.
Union memeber character arrays are to be assigned with strcpy.
unions act like a storage of various datatypes. 
*/
/* Union declation */
union allinone{

    int a;
    float b;
    char arr[20];
  
};
/*---- main()------*/
int main() {
    
    union allinone first, second, third;
    first.a = 32;
    cout<< "integer value " << first.a <<endl;
    second.b = 34.5;
    cout<< "integer value " << second.b<< endl;
    // need to use strcpy direct assignment does not work
    strcpy (third.arr, "Sree");
    cout<<"char arr value "<< third.arr <<endl;
    // if we call first.b which is not initialized you get garbage.
    cout<< "un intialized " << first.b <<endl;
    // if we initilize b of first and call a, b let us what comes
    first.b  = 123.456;
    cout << "first a = " << first.a << endl;
    cout << "first b = "<< first.b<< endl;
    /* any given point of time, one member which is recently initilized 
    can be used , other members hold garbage value*/ 
    
  return 0;
}

