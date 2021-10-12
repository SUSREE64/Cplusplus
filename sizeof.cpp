/* Length of int array and length of a string */

#include <iostream>
using namespace std;

int main () {
    char name[] = "Sreenivasulu.S";
    int array[]= {1,3,3,5,6,7,8,0};
    
    int size1 = sizeof (name)/ sizeof(char);
    int size2 = sizeof(array)/sizeof(int);
    cout << "String Length is :" << size1;
    cout<<endl;
    cout<<"The length of array :" << size2;
    cout << endl;
    // Pointer way of finding the length of the array
    
    int size3 = *(&array+1) - array;
    int size4 = *(&name + 1) - name;
    
    cout << "String Length is :" << size4;
    cout<<endl;
    cout<<"The length of array :" << size3;
    
    return 0;
}
