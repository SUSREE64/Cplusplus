/******************************************************************************
pointers:

1. Same like c  pointers are holders of address. 
2. pointer can be holding address of an integer, then it is int pointer 
3. pointer can be holding address of a char, then it is char pointer.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int value = 10;
    int *val_ptr ; // integer pointer declaration
    val_ptr = &value;// assigning this to the address of value
    
    cout << "Value of the variable :" << value <<endl;
    cout << "Value of the variale using pointer : " << *val_ptr <<endl;
    cout << "The address where the value is stored :" << &value << endl;
    cout << "The address where the value is stored Using pointer :" << val_ptr <<endl;
    
    // Manipulating the content of value 
    
    value = 100; // Reassigning the normal way
    cout << "Value of the variable :" << value <<endl;
    *val_ptr = 200;// using pointer changing the content
    cout << "Value of the variable :" << value <<endl;
    
    int var1 = 20; int var2 = 40; int temp;
    int *ptr1, *ptr2;
    ptr1 = &var1;
    ptr2 = &var2;
    //Before swapping 
    cout << "Var1, Var2 Before swapping : " << var1 << "  " <<var2 <<endl;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    cout << "Var1, Var2 after swapping : " << var1 << "  " <<var2 <<endl;
    
    return 0;
}
