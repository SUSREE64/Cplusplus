#include <iostream>
using namespace std;

int main()
{
    string name = "Sreenivasulu";
    string slice;
    cout << name << endl;
    // string concatenation
    cout << "Hi! " + name << endl;
    cout << "Legth of string" << name.length() << endl;
    //append
    name.append(" Gentleman");
    cout << name << endl;
    // Length of the strig another way.
    cout << "String size() : " << name.size() << endl;
    cout << "First letter of the string : " << name.front() << endl;
    cout << "last letter of the string : " << name.back() << endl;
    // Slicing, with substring
    slice = name.substr(3, 5);
    cout << "Sliced content of the string :" << slice << endl;
    // indexing
    cout << "The letter at index 2 is : " << name.at(2) << endl;
    cout << "The letter at index 2 is : " << name[2] << endl;
    // Replace
    string str1 = "Hello  World";
    string str2 = "My";
    str1.replace(5, 2, str2);
    cout << str1 << endl;

    return 0;
}
