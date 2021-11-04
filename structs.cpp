// Header files to include
#include <iostream>
#include <string>
using namespace std;
// namespace declarations

// global variables
struct student
{
    string Name;
    int age;
    string Group;
};
// functions headers followed by function body

// main function .
int main()
{
    //make an array of student structs named record
    student record[10];

    record[0] = {"sree", 32, "BCA"};
    record[1] = { "Devi",54,"BA_English" };
    //printing the records
    for (int i = 0; i < 2; i++){

        cout << "Student Name:" << record[i].Name << endl;
        cout << "Age :" << record[i].age << endl;
        cout << "Group: " << record[i].Group << endl;
        cout << "******" << endl;
    }

    return 0;
}
